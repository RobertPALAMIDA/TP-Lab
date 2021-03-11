#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct binar
{
	int bit;
	struct binar *urm;
}nod;

nod *adaugareInFata(nod *prim, int *bit)
{
	nod *p;
	p = (nod *)malloc(sizeof(nod));
	p->bit = bit;
	p->urm = NULL;
	if (p == NULL)
		printf("EROARE la alocarea memoriei");
	else
		if (prim == NULL)
			return p;
		else
		{
			p->urm = prim;
			return p;
		}
}


void afisareLista(nod *prim)
{
	nod *p;
	p = prim;
	while (p != NULL)
	{
		printf("%d", p->bit);
		p = p->urm;
	}
}

int GetFlag(int n, int k)
{
	return (1 & (n >> k));
}

int main()
{
	nod *prim;
	prim = NULL;
	int k, nr, i, bit;
	printf("Dati numarul nr= ");
	scanf("%d", &nr);
	for (i = 0; i <= 7; i++)
		if (GetFlag(nr, i))
			k = i;
	printf("Reprezentarea binara  numarului %d este ", nr);
	for (i = 0; i <= k; i++)
	{
		if (GetFlag(nr, i))
			bit = 1;
		else
			bit = 0;

		prim = adaugareInFata(prim, bit);
	}

	afisareLista(prim);
	printf("\n");
	system("pause");
	return 0;
}