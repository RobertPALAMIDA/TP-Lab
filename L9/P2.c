#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int v[20], n;

int max_suma_subsir(int li, int ls)
{
	int mij, suma_maxima_stanga, suma_maxima_dreapta, suma_maxima_intre;

	if (li == ls)
	{
		return v[li];
	}


	mij = (li + ls) / 2;


	suma_maxima_stanga = max_suma_subsir(li, mij);

	suma_maxima_dreapta = max_suma_subsir(mij + 1, ls);

	suma_maxima_intre = max_intre(li, mij, ls);


	return maximum(suma_maxima_stanga, suma_maxima_dreapta, suma_maxima_intre);
}

int maximum(int a, int b, int c)
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	return c;
}

int max_intre(int li, int mij, int ls)
{
	int suma_stanga, suma_dreapta, suma, i;
	suma_stanga = -1000000;
	suma = 0;

	for (i = mij; i >= li; i--)
	{
		suma = suma + v[i];
		if (suma > suma_stanga)
			suma_stanga = suma;
	}


	suma_dreapta = -1000000;
	suma = 0;

	for (i = mij + 1; i <= ls; i++)
	{
		suma = suma + v[i];
		if (suma > suma_dreapta)
			suma_dreapta = suma;
	}

	return (suma_stanga + suma_dreapta);
}

int main()
{
	int i;
	printf("Introduceti numarul de elemente ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &v[i]);
	printf("Suma maxima obtinuta este %d\n", max_suma_subsir(0, n - 1));
	system("pause");
	return 0;
}