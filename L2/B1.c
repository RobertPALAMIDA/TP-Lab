#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int N,v[100],i,j,p,k,nr;
	
	printf("Introduceti numarul de numere ");
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		printf("Dati v[%d]= ", i + 1);
		scanf("%d", &v[i]);
	}
	for (i = 0; i < N; i++)
	{
		k = 0;
		p = 0;
		for (j = 0; j <= 7; j++)
		{
			if (!(v[i] >> j & 1))
				k = k + pow(2, p);
			p = p + 1;
		}
		printf("%d \n", v[i]);
		printf("%d \n", k);
		printf("--------------------------\n");
	}
	system("pause");
	return 0;
}