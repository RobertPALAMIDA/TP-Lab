#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100

/* PROGRAM 1

// 1
int factorial_TailRecursive(int n,int i,int p_factorial)
{
	if (i <= n)
		return factorial_TailRecursive(n, i + 1, p_factorial*i);
	else
		return p_factorial;
}

// 2
int factorial_NonTailedRecursive(int n)
{
	if (n == 1)
		return n;
	else
		return n * factorial_NonTailedRecursive(n - 1);	
}


// 3
int factorial_direct(int n)
{
	if (n >= 1)
		return n * factorial_direct(n - 1);
	else
		return 1;
}

//4
int factorial_indirect(int n)
{
	if (n >= 1)
		produs_factorial(n);
	else
		return 1;
}

int produs_factorial(int n)
{
	return n * factorial_indirect(n - 1);
}


int main()
{
	int n,i=1, p_factorial=1;
	printf("Introduceti n ");
	scanf("%d", &n);
	//1 p_factorial=factorial_TailRecursive(n, i, p_factorial);
	//2 p_factorial = factorial_NonTailedRecursive(n);
	//3 p_factorial = factorial_direct(n);
	//4 p_factorial = factorial_indirect(n);
	printf("Produsul factorial al lui %d este %d", n, p_factorial);
	getch();
	return 0;
}
*/


/* PROGRAM 2
int cautare_Binara(int v[MAX],int nr,int n,int l)
{
	int pozitie;
	if (n >= l)
	{
		pozitie = l + (n - l) / 2;

	if (v[pozitie] == nr)
		return pozitie;
	else
		{
			if (v[pozitie] > nr)
				return cautare_Binara(v, nr, pozitie - 1, l);
			else
				return cautare_Binara(v, nr, n, pozitie + 1);
		}
	
	}
	return -1;
	}

int main()
{
	int v[MAX],nr,i,n,l,pozitie;
	n = MAX-1;
	for (i = 0; i <= n; i++)
	{
		v[i] = i;
	}
	
	printf("Introduceti numarul cautat ");
	scanf("%d", &nr);

	pozitie = cautare_Binara(v, nr, n, 0);
	if (pozitie == -1)
		printf("Numarul nu a fost gasit ");
	else
		printf("Numarul cautat se afla pe pozitia %d ", pozitie+1);

	getch();
	return 0;
}
*/


/*PROGRAM 3
void qsortRecursiv(int *v, int baza, int varf)
{
	int pivot, i, j, aux;
	if (baza < varf) {
		pivot = baza; 
		i = baza;
		j = varf;
		while (i < j) {
			while (v[i] <= v[pivot] && i <= varf)
				i++;
			while (v[j] > v[pivot] && j >= baza)
				j--;
			if (i < j) {
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
		aux = v[j];
		v[j] = v[pivot];
		v[pivot] = aux;
		qsortRecursiv(v, baza, j - 1);
		qsortRecursiv(v, j + 1, varf);
	}
	return 0;
}


int main()
{
	int v[MAX], n, i;
	printf("Introduceti numarul de elemente ale vectorului: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Introduceti elementul v[%d]= ", i);
		scanf("%d", &v[i]);
	}

	printf("Vectorul nesortat: \n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", v[i]);
	}

	qsortRecursiv(v, 0, n - 1);

	printf("\n Vectorul sortat: \n");
	for (i = 0; i < n; i++)
		printf("%d ", v[i]);

	getch();
	return 0;
}
*/

/*PROGRAM 4
void BubbleSortRecursiv(int *v, int n)
{
	int i, j, aux;
	i = n;
	if (i > 0)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (v[j] > v[j + 1])
			{
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
		}
		BubbleSortRecursiv(v, n - 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	int v[MAX],n,i;
	printf("Introduceti numarul de elemente: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Introduceti v[%d]=", i);
		scanf("%d", &v[i]);
	}
	printf("Vectorul nesortat: \n");
	for (i = 0; i < n; i++)
		printf("%d ", v[i]);

	BubbleSortRecursiv(v, n);
	
	printf("\nVectorul sortat \n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", v[i]);
	}
	getch();
	return 0;
}
*/