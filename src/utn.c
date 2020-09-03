#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

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
