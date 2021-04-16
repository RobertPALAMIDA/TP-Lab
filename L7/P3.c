#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int radacina_Digitala(unsigned long long int N)
{
	int suma=0;
	while (N != 0)
	{
		suma = suma + N % 10;
		N = N / 10;
	}
	if (suma < 10)
		return suma;
	else
		radacina_Digitala(suma);
}

int main()
{
	unsigned long long int N;
	int radacina;
	printf("Introduceti numarul caruia vreti sa ii calculati radacina digitala (N>1.000.000) ");
	scanf("%llu", &N);

	if(N<1000000)
		do {
			printf("Numarul introdus este mai mic decat 1.000.000! Introduceti alt numar ");
			scanf("%llu", &N);
		} while (N < 1000000);

	radacina = radacina_Digitala(N);

	printf("Radacina digitala a numarului %llu este %d", N, radacina);

	getch();
	return 0;
}