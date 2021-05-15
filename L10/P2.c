#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Fibo[20] = {1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946};
int contor=0;


void Suma(int k)
{
	int max,i;
	for (i = 19; i > 0; i--)
	{
		if (k < Fibo[i])
			max = i;
	}

	for (i = max; i >= 0; i--)
	{
		if (k >= Fibo[i])
		{
			k = k - Fibo[i];
			contor++;
		}
	}
	if (k != 0)
		printf("Numarul ales nu poate fi format din numere Fibonaci \n");
	else
		printf("Numarul poate fi format cu minim %d numere Fibonaci \n", contor);
}

int main()
{
	int k;
	printf("Introduceti numarul ");
	scanf("%d", &k);
	Suma(k);
	system("pause");
	return 0;
}