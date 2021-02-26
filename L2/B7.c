#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int GetFlag(int n, int k)
{
	return (1 & (n >> k));
}

int main()
{
	int N,i,j,k=0;
	printf("Dati N ");
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
		for (j = 7; j >= 0; j--)
			if (GetFlag(i, j))
				k = k + 1;

	printf("Suma bitilor este %d", k);

	system("pause");
	return 0;

}