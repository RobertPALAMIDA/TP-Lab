#define _CRT_SECURE_NO_WARNINGS
#include < stdio.h.>

#define MAX_SIZE 100
#define DEFAULT -1

int V[MAX_SIZE];
int varf = -1;

int Vb[MAX_SIZE];
int varfb = -1;

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

void SetTop(int n)
{
	V[varf] = n;
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

int GetFlag(int n, int k)
{
	return (1 & (n >> k));
}

void golireStiva()
{
	int i, n;
	n = varf;
	for (i = 0; i <= n; i++)
		varf--;
}

int main()
{
	int x,i,ok=0,k=0;

	while (!ok)
	{
		printf("Dati x curprins intre 0 si 255, x=");
		scanf("%d", &x);
		if (x >= 0 && x <= 255)
			ok = 1;
		else
			printf("Datele au fost introduse gresit! Introduceti din nou \n");
	}
	printf("Numarul %d in binar este:", x);
		for (i = 7; i >=0; i--)
		{
			if (GetFlag(x, i))
			{
				Push(1);
				k++;
			}
			else
			{
				Push(0);
			}
		}
		
	printStack();
	golireStiva();
	printf("Valoarea maxima posibila este:");
	for (i = 7; i >= 0; i--)
	{
		if (k != 0)
		{
			Push(1);
			k--;
		}
		else
			Push(0);
	}
	printStack();
	system("pause");
	return 0;
}