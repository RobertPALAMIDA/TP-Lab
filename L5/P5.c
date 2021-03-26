#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX_SIZE 100
#define DEFAULT -1

int V[MAX_SIZE];
int varf = -1;

int AUX[MAX_SIZE];
int varfaux = -1;

int Prime[MAX_SIZE];
int varfprime = -1;

void PushMain(int n)
{
	if (!IsFullMain())
	{
		V[++varf] = n;
	}
}

int PopMain()
{
	int n = 0;
	if (!IsEmptyMain())
	{
		n = V[varf];
		V[varf--] = DEFAULT;
		return n;
	}
}

int IsEmptyMain()
{
	if (varf == -1)
	{
		return 1;
	}
	return 0;
}

int IsFullMain()
{
	if (varf == MAX_SIZE - 1)
	{
		printf("Stiva este plina");
		return 1;
	}
	return 0;
}

int Peek()
{
	return V[varf];
}


void golireStiva()
{
	int i, n;
	n = varf;
	for (i = 0; i <= n; i++)
		varf--;
}


void PushAux(int n)
{
	if (!IsFullAux())
	{
		AUX[++varfaux] = n;
	}
}

int PopAux()
{
	int n = 0;
	if (!IsEmptyAux())
	{
		n = AUX[varfaux];
		AUX[varfaux--] = DEFAULT;
		return n;
	}
}

int IsEmptyAux()
{
	if (varfaux == -1)
	{
		return 1;
	}
	return 0;
}

int IsFullAux()
{
	if (varfaux == MAX_SIZE - 1)
	{
		printf("Stiva este plina");
		return 1;
	}
	return 0;
}

void golireStivaAux()
{
	int i, n;
	n = varfaux;
	for (i = 0; i <= n; i++)
		varfaux--;
}


void PushPrime(int n)
{
	if (!IsFullPrime())
	{
		Prime[++varfprime] = n;
	}
}

int PopPrime()
{
	int n = 0;
	if (!IsEmptyPrime())
	{
		n = Prime[varfprime];
		Prime[varfprime--] = DEFAULT;
		return n;
	}
}

int IsEmptyPrime()
{
	if (varfprime == -1)
	{
		return 1;
	}
	return 0;
}

int IsFullPrime()
{
	if (varfprime == MAX_SIZE - 1)
	{
		printf("Stiva este plina");
		return 1;
	}
	return 0;
}

void StivaMain()
{
	int n;
	n = PopAux();
	PushMain(n);
}

void printStack()
{
	int i = 0;
	for (i = 0; i <= varf; i++)
	{
		printf("%d \n", V[i]);
	}
	printf("\n");
}

int GetFlag(int n, int k)
{
	return (1 & (n >> k));
}

void printStackAux()
{
	int i = 0;
	for (i = 0; i <= varfaux; i++)
	{
		printf("%d", AUX[i]);
	}
	printf("\n");
}


void verificarePrim()
{
	int nr, k = 0, i;
	nr = PopMain();
	if (nr == 1)
		PushAux(nr);
	if (nr == 2)
		PushPrime(nr);
	for (i = 1; i <= nr; i++)
		if (nr%i == 0)
			k++;
	if (k > 2)
		PushAux(nr);
	else if(k<=2 && nr!=1 && nr!=2)
		PushPrime(nr);
}


void TransformareBinara()
{
	int i,n;
	n = PopPrime();
	for (i = 7; i >= 0; i--)
		if (GetFlag(n, i))
			PushAux(1);
		else
			PushAux(0);
	printStackAux();
	golireStivaAux();
}



int main()
{
	int i;
	for (i = 1; i <= 50; i++)
		PushMain(i);
	for (i = 1; i <= 50; i++)
		verificarePrim();

	golireStiva();

	while (varfaux != -1)
		StivaMain();

	printStack();

	while(varfprime !=-1)
		TransformareBinara();

	system("pause");
	return 0;
}