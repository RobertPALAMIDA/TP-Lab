#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int  nr1,nr2,p=0;
	printf("Introduceti primul numar ");
	scanf("%d", &nr1);
	printf("Introduceti al doilea numar ");
	scanf("%d", &nr2);
	while (nr2 != 0)
	{
		if (nr2 & 1)
			p = p + nr1;

		nr1=nr1 << 1;
		nr2=nr2 >> 1;
	}
	printf("Produsul este %d \n", p);

	system("pause");
	return 0;

}