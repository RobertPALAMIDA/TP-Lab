#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GetFlag(int n)
{
	return (1 & (n >> 31));
}

int main()
{
	int  n,i,k=0;
	printf("Introduceti numarul ");
	scanf("%d", &n);
	for (i = 31; i >= 0; i--)
		if (n >> i & 1)
			k = k + 1;
	if (k == 0)
		printf("Numarul este nul\n");
	else if (GetFlag(n))
		printf("Numarul este negativ\n");
	else
		printf("Numarul este pozitiv\n");
	

	system("pause");
	return 0;

}