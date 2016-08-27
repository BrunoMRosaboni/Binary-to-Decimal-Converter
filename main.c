#include <stdio.h>

unsigned long int RecursiveCalc(unsigned long int NumBin);
unsigned long int IterativeCalc(unsigned long int NumBin);

int main(void)
{
	unsigned long int Valor, NumBin;

	scanf("%lu", &NumBin);

	Valor = IterativeCalc(NumBin);
	printf("%lu", Valor);
	printf("\n");
	Valor = RecursiveCalc(NumBin);
	printf("%lu", Valor);
	printf("\n");

	return 0;
}

unsigned long int RecursiveCalc(unsigned long int NumBin)
{
	unsigned long int Valor=0, Resto, count=10;

	if (NumBin > 0)
	{
		Valor=1;
		Resto = NumBin%count;
		NumBin = NumBin/count;
		Valor = RecursiveCalc(NumBin);
		Valor = (Valor * 2) + Resto;
	}

	return Valor;
}

unsigned long int IterativeCalc(unsigned long int NumBin)
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
