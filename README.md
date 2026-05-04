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

**Módulo EUSART del PIC**

El PIC18F45K22 tiene integrado un módulo llamado EUSART, que facilita la implementación de comunicación serial. Este módulo se encarga de gestionar tanto la transmisión como la recepción de datos, sin necesidad de que el programador controle cada bit manualmente.

El EUSART puede trabajar en modo síncrono o asíncrono, pero en este laboratorio se utilizó el modo asíncrono, ya que es el más común cuando se trabaja con computadoras.

Además, este módulo utiliza registros internos como TXREG (para enviar datos) y RCREG (para recibirlos), lo que simplifica bastante el proceso de comunicación.

**Comunicación serial UART**

La UART funciona enviando los datos de manera secuencial, es decir, un bit a la vez. Esto contrasta con la comunicación paralela, donde se envían varios bits al mismo tiempo, pero requiere más líneas físicas.

Cada dato que se transmite mediante UART sigue una estructura específica llamada trama. Esta incluye un bit de inicio que indica cuándo comienza la transmisión, seguido de los bits de datos (generalmente 8), y finalmente uno o más bits de parada que indican el final del dato.

Este formato permite que el dispositivo receptor se sincronice correctamente con el emisor, incluso sin un reloj compartido.

**Parámetros de configuración**

Para que la comunicación UART funcione correctamente, es necesario que ambos dispositivos tengan exactamente la misma configuración. Los parámetros más importantes son:

* Baud rate: Es la velocidad a la que se transmiten los bits. En este laboratorio se usó 9600 bits por segundo, que es un valor bastante común.
* Bits de datos: Generalmente se usan 8 bits, lo que permite enviar caracteres estándar.
Paridad: Es un método para detectar errores, pero en este caso no se utilizó.
* Bits de parada: Indican el final de cada dato, normalmente se usa 1 bit.

Si alguno de estos parámetros no coincide entre los dispositivos, los datos recibidos pueden aparecer corruptos o ilegibles.

## Diagramas

## Evidencias de implementación