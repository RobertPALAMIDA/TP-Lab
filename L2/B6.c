#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int GetFlag(int n, int k)
{
	((n&(1 << k)) == (1 << k));
	return (1 & (n >> k));
}

int main()
{
	int n, i,k=0,val_max=0,p=7;
	printf("Dati n=");
	scanf("%d", &n);
	for (i = 7; i >= 0; i--)
	{
		if (GetFlag(n, i))
		{
			k = k + 1;
			printf("%c",'1');
		}
		else
			printf("%c",'0');
	}
	printf("\n");
	
	for (i = k; i > 0; i--)
	{
		val_max = val_max + pow(2, p);
		p = p - 1;
	}
	for (i = 0; i <= 7; i++)
	{
		if (k != 0)
		{
			printf("%c", '1');
			k = k - 1;
		}
		else
			printf("%c", '0');
	}
	printf("=%d \n", val_max);

	system("pause");
	return 0;

}