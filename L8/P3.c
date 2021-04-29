#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int k = 0;
void Collatz(int n)
{
	if (n == 1)
	{
		k++;
		printf("%d\n", n);
		return 1;
	}

	if (n % 2 == 0)
	{
		k++;
		printf("%d\n", n);
		return Collatz(n / 2);
	}

	if (n % 2 != 0)
	{
		k++;
		printf("%d\n", n);
		return Collatz(3 * n + 1);
	}
}

int main()
{
	int n; //pentru n=871 se ajung la 179 de iteratii|pentru n=6171 se ajung la 262 de iteratii
	printf("Introduceti n=");
	scanf("%d", &n);
	Collatz(n);
	printf("Pana s-a ajuns la valoarea finala s-au realizat %d iteratii \n", k);
	system("pause");
	return 0;
}