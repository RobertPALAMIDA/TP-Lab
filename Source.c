#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	printf("Dati a= ");
	scanf("%d", &a);
	printf("Dati b= ");
	scanf("%d", &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("Numerele au fost interschimbate a=%d , b=%d ", a, b);
	system("pause");
	return 0;
	
}