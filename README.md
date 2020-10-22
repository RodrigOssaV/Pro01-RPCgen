# Proyecto 01 - RPCgen

Pre-compilador generador de interfaces en C. A partir de una especificación se crea código en C que permite inicializar un cliente y un servidor. 
Priority Things es un proyecto dedicado al curso Sistema distribuidos que consta de cuatro servicios básicos.

    - Servicio de convertidor divisas.
    - Servicio de agenda. 
    - Servicio de calendario.
    - Servicio de post-it.

## Herramientas necesarias

- RPCGEN
- Visual Studio Code
- Ubuntu Linux

## Instrucciones de instalación.

En la terminal de Ubuntu ejecute los siguientes comandos:

```sh
$ sudo apt install update
$ sudo apt install build-essential
$ sudo apt install rpcgen
$ sudo apt install rpcbind
```

## Iniciar el proyecto

Para iniciar el proyecto deberá hacer lo siguiente: 

- Deberá clonar este repositorio o bien, descargarlo en su computadora.
- Abrir el proyecto con Visual Studio.
- Una vez abierto el proyecto, deberá abrir una terminal y ejecutar el siguiente comando.

>> make -f Makefile.main

Si todo sale bien, deberá escribir en la terminal lo siguiente para iniciar el servidor: 

>> ./main_server 

Debe abrir otro terminal en Visual Studio y escribir lo siguiente para acceder a los servicios:

>> ./main_client localhost

