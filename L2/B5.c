#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GetFlag(int n)
{
	return (1 & n);
}
int main()
{
	int  n,v[100],i;
	printf("Dati numarul de numere ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Dati v[%d]= ", i + 1);
		scanf("%d", &v[i]);
	}

	for (i = 0; i < n; i++)
	{
		if ((GetFlag(v[i]) || 0))
			printf("%d este impar \n",v[i]);
		else
			printf("%d este par \n", v[i]);
	}

	system("pause");
	return 0;

}