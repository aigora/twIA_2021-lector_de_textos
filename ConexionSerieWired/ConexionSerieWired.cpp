// ConexionSerieWired.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include "SerialClass/SerialClass.h"

int main()
{
    Serial* Arduino; 
    char puerto[]="COM3";
    char BufferSalida[200];
    char BufferEntrada[200];
    int bytesRecibidos;
    int contador = 0;
    char secuencia[4];

    Arduino = new Serial((char *)puerto);
    while (Arduino->IsConnected())
    {
        printf("Arduino conectado\n");
       // sprintf_s(secuencia, "%d", contador);

        strcpy_s(BufferSalida, "Encendida led 13"); //Frase que enviamos
        gets_s(BufferSalida);
       //  strcat_s(BufferSalida, secuencia);
        printf("Enviando %s\n",BufferSalida); //se muestra por pantalla lo que enviamos
        Arduino->WriteData(BufferSalida, strlen(BufferSalida));
        contador++;
        if (contador == 1)
            Sleep(2000);
        else
            Sleep(2000);
        bytesRecibidos = Arduino->ReadData(BufferEntrada, sizeof(char)*199);
        if (bytesRecibidos != -1)
        {
            BufferEntrada[bytesRecibidos - 1] = '\0';
            printf("Contenido: %s\n",BufferEntrada);
        }
        else
            printf("No se ha recibido nada\n");
        Sleep(1000);
    }
}

