#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//PROGRAM 1 (suma elementelor unui vector folosindu-ne doar de variabile de tip pointer.)
/*void suma(int *v,int *i,int *sf)
{
	int *s;
	s=(int *)malloc(sizeof(int));
	*s = 0;
	for (i = v; i < sf; i++)
		*s = *s + *i;

	printf("Suma elementelor este %d \n", *s);
}

int main()
{
	int *v, *i, *sf, n,suma2;
	printf("Dati numarul de elemente al vectorului ");
	scanf("%d", &n);
	v = (int *)malloc(n * sizeof(int));
	sf = v + n;

	for (i = v; i < sf; i++)
	{
		printf("Introduceti un element ");
		scanf("%d", i);
	}

	suma(v, i, sf);

	system("pause");
	return 0;
}*/

//PROGRAM 2 (program care insumeaza elementele intr-o metoda separate de metoda main, folosind transmiterea prin referinta.)
/*int sumaREF(int *a, int *b)
{
	int  s;
	s = 0;
	s = *a + *b;

	return s;
}
int main()
{
	int s, a, b;
	printf("Dati a=");
	scanf("%d", &a);
	printf("Dati b=");
	scanf("%d", &b);

	s = sumaREF(&a, &b);
	printf("Suma elementelor este %d \n", s);

	system("pause");
	return 0;
}*/

//PROGRAM 3 (program care interschimba 2 valori folosind un pointer ca variabila auxiliara.)
/*void interschimbare(int *a, int *b)
{
	int *aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

int main()
{
	int a, b;

	printf("Dati a= ");
	scanf("%d", &a);

	printf("Dati b= ");
	scanf("%d", &b);

	interschimbare(&a, &b);
	printf("Numerele au fost interschimbate a=%d si b=%d \n", a, b);

	system("pause");
	return 0;
}*/