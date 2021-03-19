#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX_SIZE 100
#define DEFAULT -1

int V[MAX_SIZE];
int varf = -1;

void Push(int n)
{
	if (!IsFull())
	{
		V[++varf] = n;
	}
}

int Pop()
{
	int n = 0;
	if (!IsEmpty())
	{
		n = V[varf];
		V[varf--] = DEFAULT;
		return n;
	}
}

int IsEmpty()
{
	if (varf == -1)
	{
		return 1;
	}
	return 0;
}

int IsFull()
{
	if (varf == MAX_SIZE - 1)
	{
		printf("Stiva este plina");
		return 1;
	}
	return 0;
}

void printStack()
{
	int i = 0;
	for (i = 0; i <= varf; i++)
	{
		printf("%d", V[i]);
	}
	printf("\n");
}

void verfPalindrom()
{
	int i = 1,OK=1;
	for (i = 0; i <= varf; i++)
	{
		if (!(V[varf - i] == V[i]))
		{
			OK = 0;
		}
	}
	if (OK == 1)
		printf("Forma binara este palindrom\n");
	else
		printf("Forma binara nu este palindrom \n");

}

int GetFlag(int n, int k)
{
	return (1 & (n >> k));
}

void main()
{
	int N, x[10], i,nr=0;
	printf("Introduceti numarul de cifre ");
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		printf("Introduceti cifra nr.%d ", i + 1);
		scanf("%d", &x[i]);
		nr = nr * 10 + x[i];
	}
	printf("Numarul obtinut este %d,reprezentarea lui in forma binara este:", nr);
	for (i=7; i>=0; i--)
		{
			if (GetFlag(nr, i))
				Push(1);
			else
				Push(0);
		}
	printStack();
	verfPalindrom();

	system("pause");
	return 0;
}