#include <stdio.h>
/*#include <stdlib.h>*/

unsigned long int CalcRec(unsigned long int NumBin);
unsigned long int CalcIt(unsigned long int NumBin);

int main(void)
{
	unsigned long int Valor, NumBin;

	scanf("%lu", &NumBin);

	Valor = CalcIt(NumBin);
	printf("%lu", Valor);
	printf("\n");
	Valor = CalcRec(NumBin);

	printf("%lu", Valor);
	printf("\n");
	
	return 0;
}

unsigned long int CalcRec(unsigned long int NumBin)
{
	unsigned long int Valor=1, Resto, count=10;

	Resto = NumBin%count;
	NumBin = NumBin/count;

	if (NumBin > 0)
	{
		Valor = CalcRec(NumBin);
		Valor = (Valor * 2) + Resto;
	}

	return Valor;
}

unsigned long int CalcIt(unsigned long int NumBin)
{
	unsigned long int i, count, aux, Valor;

	aux = 1;
	count = 10;
	Valor = 0;

	do
	{
		i = NumBin%count;
		NumBin = NumBin/count;
		Valor = i * aux + Valor;
		aux = aux * 2;		
	}
	while(NumBin > 0);

	return Valor;
}
