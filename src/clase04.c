/*
 ============================================================================
 Name        : clase04.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"

int main(void)
{
	setbuf(stdout,NULL);
	float resultado;
	int numero1;
	int numero2;
	int respuesta;

	ingresarNumero(&numero1, "Ingrese un numero ", "Error - Ingrese nuevamente un numero ");
	ingresarNumero(&numero2, "Ingrese un numero ", "Error - Ingrese nuevamente un numero ");

	respuesta=dividir(numero1, numero2, &resultado);

	if(respuesta==0)
	{
		printf("El resultado es: %.2f\n", resultado);
	}
	else
	{
		printf("No es posible dividir por cero\n");
	}

	return EXIT_SUCCESS;
}
