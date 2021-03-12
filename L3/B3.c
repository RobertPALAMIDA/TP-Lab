#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//PROGRAM 1
/*int main()
{
	int a,b,*point1,*point2,v[5] = {0,1,2,3,4}, *p;
	a = 3;
	b = 5;
	point1 = &a;
	point2 = &b;
	printf("Aceasta este adresa lui a=%p si aceasta a lui point1=%p \n",&a, point1);
	printf("Aceasta este adresa lui b=%p si aceasta a lui point2=%p \n", &b, point2);
	point1++;
	point2--;
	printf("Aceasta este adresa lui point1 dupa incrementare %p si adresa lui point2 dupa decrementare %p \n", point1, point2);
	
	
	printf("\n --------------------------------------------------- \n");
	p = &v[0];
	printf("La fiecare incrementare a pointerului se modifica adresa spre care pointeaza\n");
	printf("%d \n", *p);
	p++;
	printf("%d \n", *p);
	p++;
	printf("%d \n", *p);
	p++;
	printf("%d \n", *p);
	p++;
	printf("%d \n", *p);
	p++;


	system("pause");
	return 0;
}*/
//PROGRAM 2
/*int *suma(int *a, int *b)
{
	int s;
	s = *a + *b;
	return &s;
}

int main()
{
	int a, b,*s;
	printf("Dati a=");
	scanf("%d", &a);
	printf("Dati b=");
	scanf("%d", &b);
	s = suma(&a, &b);
	printf("Suma este %d \n", *s);
	system("pause");
	return 0;
}*/