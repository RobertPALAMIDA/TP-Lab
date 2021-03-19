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

void golireStiva()
{
	int i, n;
	n = varf;
	for (i = 0; i <= n; i++)
		varf--;
}

int GetFlag(int n, int k)
{
	return (1 & (n >> k));
}

int main()
{
	int n, x[100], i, j;

	printf("Dati numarul de elemente ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Dati x[%d]=", i);
		scanf("%d", &x[i]);
	}
	for (i = 0; i < n; i++)
	{
		printf("Numarul %d in binar este:", x[i]);
		for (j = 7; j >= 0; j--)
		{
			if (GetFlag(x[i], j))
			{
				Push(0);
				printf("%c", '1');
			}
			else
			{
				Push(1);
				printf("%c", '0');
			}
		}
		printf("\n");
		printf("Forma inversa binara este:");
		printStack();
		golireStiva();
		printf("---------------------------------------- \n");
	}


	system("pause");
	return 0;
}