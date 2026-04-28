[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/MCJunYEq)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=23741264&assignment_repo_type=AssignmentRepo)
# Lab06: Comunicación UART con PIC18F45K22

## Integrantes

* [JUAN CAMILO SAMPER](https://github.com/CamiloSp22)
* [CRISTIAN FABIAN LOZANO](https://github.com/cristianfalozanoav)

## Documentación
La comunicación UART es una de las formas más básicas y al mismo tiempo más importantes de comunicación en electrónica y sistemas embebidos. Se usa para que dos dispositivos puedan intercambiar información de manera sencilla, enviando los datos bit por bit a través de un canal serial.

A diferencia de otros tipos de comunicación, la UART es asíncrona, lo que significa que no necesita una señal de reloj compartida entre los dispositivos. En vez de eso, ambos dispositivos deben ponerse de acuerdo previamente en ciertos parámetros como la velocidad de transmisión (baud rate), la cantidad de bits de datos, si se usa o no paridad y cuántos bits de parada se van a manejar. Si estos parámetros no coinciden, la comunicación simplemente no funciona bien.

Una de las principales ventajas de la UART es que solo requiere dos líneas para funcionar: una para transmitir (TX) y otra para recibir (RX). Esto hace que sea muy fácil de implementar en proyectos con microcontroladores, además de ser muy útil para conectar el sistema con una computadora mediante un adaptador USB a serial.

En la práctica, la UART se usa mucho para depuración de programas, monitoreo de variables en tiempo real, comunicación con sensores o módulos externos, e incluso para enviar datos a interfaces gráficas o scripts en Python.

En este laboratorio se trabajó con el microcontrolador PIC18F45K22, aprovechando su módulo EUSART para configurar una comunicación UART en modo asíncrono. Se estableció una velocidad de transmisión de 9600 bits por segundo y se enviaron datos hacia un computador, donde se visualizaron mediante un terminal serial. Esto permitió entender de forma práctica cómo funciona este tipo de comunicación y qué aspectos son críticos para que funcione correctamente.





## Diagramas

## Evidencias de implementación