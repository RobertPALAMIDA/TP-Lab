#define _CRT_SECURE_NO_WARNINGS
#include < stdio.h.>

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
		printf("%d ", V[i]);
	}
	printf("\n");
}

int GetFlag(int n, int k)
{
	return (1 & (n >> k));
}

int main()
{
	int n,v[100], C, i,ok=0;
	while (!ok)
	{
		printf("Dati pozitia C intre 0 si 7 ");
		scanf("%d", &C);
		if (C >= 0 && C < 7)
			ok = 1;
		else
			printf("Nu a fost introdus corect!\n");
	}
	printf("Dati numarul de elemente ale vectorului ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Elementul v[%d]=", i);
		scanf("%d", &v[i]);
	}

	for (i = 0; i < n; i++)
	{
		if (GetFlag(v[i], C))
			Push(v[i]);
	}

	printStack();

	system("pause");
	return 0;
}