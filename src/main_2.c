#include <xc.h>
#include "uart.h"
#include <stdio.h>// habilitar libreria sprintf

#pragma config FOSC = INTIO67  // Oscilador interno
#pragma config WDTEN = OFF     // Watchdog Timer apagado
#pragma config LVP = OFF       // Low Voltage Programming off


void main(void) {
    OSCCON = 0b01110000;  // Oscilador interno a 16MHz
    UART_Init();          // Inicializa UART

    int voltaje_simulado = 0; // Empezamos en 1
    char buffer[32];          // Espacio en memoria para armar nuestro mensaje

    while(1) {
        // Armamos el mensaje. Ej: "Voltaje: 1.0" y el salto de línea
        sprintf(buffer, "Voltaje: %d.0\r\n", voltaje_simulado);
        
        // Enviamos el texto armado por el puerto serial
        UART_WriteString(buffer);
        
        // Aumentamos nuestro contador
        voltaje_simulado++;
        
        // Si el contador pasa de 5, lo regresamos a 1
        if(voltaje_simulado > 5) {
            voltaje_simulado = 0;
        }

        __delay_ms(1000);  // Esperamos 2 segundo
    }
}
