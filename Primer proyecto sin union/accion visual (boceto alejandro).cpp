#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 6
struct LEDS {
	int orden;
	char color[15];
};

struct LEDS led1 {
	"1",
	"rojo",
};

struct LEDS led2 {
	"2",
	"verde",
};

struct LEDS led3 {
	"3",
	"amarillo",
};

struct LEDS led4 {
	"4",
	"azul",
};

struct LEDS led5 {
	"5",
	"blanco",
};

struct LEDS led6 {
	"6",
	"naranja",
};

int main() {
	int opcion;
	char Accion[DIM];

	printf("**MENU DE OPCIONES**\n");
	printf("1- Encender led 1\n");
	printf("2- Encender led 2\n");
	printf("3- Encender led 3\n");
	printf("4- Encender led 4\n");
	printf("5- Encender led 5\n");
	printf("6- Encender led 6\n");

	switch (opcion) {
	case 1:
		if (strcmp(Accion, led1.color) == 0) {
			printf("Color: %s\nLed encendida: %d\n", led1.color, led1.orden);
		}
		break;
	case 2:
		if (strcmp(Accion, led2.color) == 0) {
			printf("Color: %s\nLed encendida: %d\n", led2.color, led2.orden);
		}
		break;
	case 3:
		if (strcmp(Accion, led3.color) == 0) {
			printf("Color: %s\nLed encendida: %d\n", led3.color, led3.orden);
		}
		break;
	case 4:
		if (strcmp(Accion, led4.color) == 0) {
			printf("Color: %s\nLed encendida: %d\n", led4.color, led4.orden);
		}
		break;
	case 5:
		if (strcmp(Accion, led5.color) == 0) {
			printf("Color: %s\nLed encendida: %d\n", led5.color, led5.orden);
		}
		break;
	case 6:
		if (strcmp(Accion, led6.color) == 0) {
			printf("Color: %s\nLed encendida: %d\n", led6.color, led6.orden);
		}
	default:
		printf("Opcion incorrecta\n"); 
	}
		getchar();
}