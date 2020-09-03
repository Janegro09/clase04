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

//Prototipos
int  dividir(int, int, float*);
int ingresarNumero(int*, char*, char*);

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

//Definicion de funciones
int ingresarNumero (int *pNumero, char *texto, char *textoError)
{
	int resultado=-1;
	int resultadoScan;
	printf("%s",texto);
	__fpurge(stdin);
	resultadoScan=scanf("%d",pNumero);
	while (resultadoScan == 0)
	{
		printf("%s",textoError);
		__fpurge(stdin);
		resultadoScan=scanf("%d",pNumero);
		resultado=0;
	}

	return resultado;
}

int dividir (int numero1, int numero2, float *pResultado)
{
	int resultado = -1;
	if(numero2 !=0)
	{
		*pResultado=(float)numero1/numero2;
		resultado = 0;
	}
	return resultado;
}
