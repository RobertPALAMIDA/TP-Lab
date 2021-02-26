#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int GetFlag(int n, int k)
{
	return (1 & (n >> k));
}

int main()
{
	int n,k,patrat=0;
	printf("Introduceti numarul ");
	scanf("%d", &n);
	k = n;
	while (k != 0)
	{
		if (k & 1)
			patrat = patrat + n;

		n = n << 1;
		k = k >> 1;
	}
	printf("Patratul numarului este %d \n", patrat);
	system("pause");
	return 0;

}