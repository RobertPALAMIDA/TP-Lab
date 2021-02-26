#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GetFlag(int n, int k)
{
	return (1 & (n >> k));
}

int main()
{
	int C, N, v[100], i;
	printf("Introduceti pozitia C ");
	scanf("%d", &C);
	printf("Introduceti numarul de numere ");
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		printf("Dati v[%i]= ", i + 1);
		scanf("%d", &v[i]);
	}
	for (i = 0; i < N; i++)
		if (GetFlag(v[i], C))
			printf("%d ", v[i]);

	system("pause");
	return 0;

}