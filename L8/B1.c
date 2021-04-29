#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char v[100];
char sir[100];
int ciphersize;
int lung;

void Init(int i)
{
	v[i] = '0';
}

int Solution(int i)
{
	return (i == ciphersize);
}

int Succesor(int k) {
	if (v[k] < 'z')
	{ 
		v[k]++; 
		return 1; 
	}
	else 
	{
		return 0;
	}
}

int Valid(int k) {
	int i = 0, ok=0;
	for (i = 0; i < k; i++) 
	{
		if (v[i] >= v[k])
		{
			return 0; 
		}
	}
	for (i = 0; i < lung; i++)
		if (sir[i] == v[k])
			ok = 1;

	if (ok == 0)
		return 0;


	return 1;
}

void Print() {
	int i;
	for (i = 1; i <= ciphersize; i++)
	{
		printf("%c", v[i]);
	}
	printf("\n");
}

void Back() {
	int index, isS, isV;
	index = 1;
	Init(index);
	while (index > 0)
	{ 
		isS = 0;
		isV = 0;
		if (index <= ciphersize) 
		{
			do {
				
				isS = Succesor(index);
				if (isS)
				{
					isV = Valid(index);
				}
			} while (isS && !isV);
		}
		
		if (isS) 
		{
			if (Solution(index)) 
			{
				Print(); 
			}
			else
			{	
				index++;
				Init(index); 
			}
		}
		else 
		{
			index--; 
		}
	}
}



int main()
{
	int i;
	printf("Introduceti sirul de caractere ");
	scanf("%s", sir);
	lung = strlen(sir);
	for (i = 1; i <= lung; i++)
	{
		ciphersize = i;
		Back(i);
	}
	system("pause");
	return 0;
}

