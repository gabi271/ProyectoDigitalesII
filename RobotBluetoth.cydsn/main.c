//Incluir librerias
#include "project.h"
#include "LiquidCrystal_I2C.h"
#include "stdio.h"
#include <stdbool.h>

//Declarar variables
volatile char dato; //Dato ingresado por coneccion bluetooth UART

// Variables para detectar flancos
volatile bool adelantePresionado = false;
volatile bool atrasPresionado = false;
volatile bool derechaPresionado = false;
volatile bool izquierdaPresionado = false;

//Funcion derecha
void TurnRight() {
    clear();
    LCD_print("DERECHA");
    setCursor(0, 1);
    M1_1_Write(0);
    M1_2_Write(1);
    PWM_Motores_WriteCompare1(200);
    M2_1_Write(0);
    M2_2_Write(1);
    PWM_Motores_WriteCompare2(100);
}

//Funcion izquierda
void TurnLeft() {
    clear();
    LCD_print("IZQUIERDA");
    setCursor(0, 1);
    M1_1_Write(1);
    M1_2_Write(0);
    PWM_Motores_WriteCompare1(105);
    M2_1_Write(1);
    M2_2_Write(0);
    PWM_Motores_WriteCompare2(255);
}

//Funcion adelante
void Forward() {
    clear();
    LCD_print("ADELANTE");
    setCursor(0, 1);
    M1_1_Write(1);
    M1_2_Write(0);
    PWM_Motores_WriteCompare1(255);
    M2_1_Write(1);
    M2_2_Write(0);
    PWM_Motores_WriteCompare2(255);
}

//Funcion atras
void Back() {
    clear();
    LCD_print("ATRAS");
    setCursor(0, 1);
    M1_1_Write(0);
    M1_2_Write(1);
    PWM_Motores_WriteCompare1(105);
    M2_1_Write(0);
    M2_2_Write(1);
    PWM_Motores_WriteCompare2(105);
}

//Funcion Detener
void Detener() {
    clear();
    LCD_print("TDII - GRUPO 3");
    setCursor(0, 1);
    setCursor(0, 2);
    M1_1_Write(0);
    M1_2_Write(0);
    PWM_Motores_WriteCompare1(0);
    M2_1_Write(0);
    M2_2_Write(0);
    PWM_Motores_WriteCompare2(0);
}

CY_ISR(InterrumpISR) {
    dato = UART_GetChar(); // Recibe el dato del bluetooth
    //Switchea el dato segun el siguiente criterio
    switch (dato) {
        case '0': //Adelante
            adelantePresionado = true;
            break;
        case '1': //Atras
            atrasPresionado = true;
            break;
        case '2': //Giro a la derecha
            derechaPresionado = true;
            break;
        case '3': //Giro a la Izquierda
            izquierdaPresionado = true;
            break;
        default:
            break;
    }
}

int main(void) {
    CyGlobalIntEnable;
    
    PWM_Motores_Start(); //Incializar PWM
    PWM_Motores_WriteCompare1(0);
    PWM_Motores_WriteCompare2(0);
    M1_1_Write(0); //Motor 1 estado inicial: apagado
    M1_2_Write(0);
    M2_1_Write(0); //Motor 2 estado inicial: apagado
    M2_2_Write(0);
    
    UART_Start(); //Inicializar UART
    I2C_Start(); //Inicializar I2C
    LiquidCrystal_I2C_init(0x27,16,2,0); //Inicializar LCD
    begin();

    RXisr_StartEx(InterrumpISR);
    
    //Mostrar mensaje por LCD
    LCD_print("TDII - GRUPO 3");
    setCursor(0, 1);

    for (;;) {
    // Verificar si se ha presionado adelante
    if (adelantePresionado) {
        adelantePresionado = false; // Reiniciar la bandera

        // Comenzar a avanzar
        Forward();
    }else{
        Detener();
    }

    // Verificar si se ha presionado atrás
    if (atrasPresionado) {
        atrasPresionado = false; // Reiniciar la bandera

        // Comenzar a retroceder
        Back();
    }else{
        Detener();
    }

    // Verificar si se ha presionado derecha
    if (derechaPresionado) {
        derechaPresionado = false; // Reiniciar la bandera

        // Girar a la derecha
        TurnRight();
    }else{
        Detener();
    }

    // Verificar si se ha presionado izquierda
    if (izquierdaPresionado) {
        izquierdaPresionado = false; // Reiniciar la bandera

        // Girar a la izquierda
        TurnLeft();
    }else{
        Detener();
    }
    }
}
