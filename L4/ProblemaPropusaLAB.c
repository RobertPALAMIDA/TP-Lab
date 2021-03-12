#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define VMAX 100
#define defaultValue -1

int v[VMAX], varf = -1;

void push(int elem)
{
	++varf;
	if (VMAX > varf)
		v[varf] = elem;
	else
		printf("Stiva este plina");
}

int pop()
{
	int a;
	a = v[varf];
	v[varf] = defaultValue;
	varf--;
	return a;
}

int GetTop()
{
	if (varf >= 0)
		return v[varf];
	else
		return defaultValue;
}

int main()
{
	int x, ok = 0, k;
	printf("Introduceti un numar x= ");
	scanf("%d", &x);
	push(x);
	while (ok == 0)
	{
		if (GetTop() >= 20)
		{
			pop();
			x = x - 3;
			push(x);
			ok = 1;
		}

		else if (GetTop() > 12 && GetTop() < 20)
		{
			pop();
			x = x + 1;
			push(x);
		}
		else
		{
			x = pow(x, 2);
			push(x);

			if (GetTop() >= 20)
			{
				pop();
				x = x - 3;
				push(x);
			}
			else if (GetTop() > 12 && GetTop() < 20)
			{
				pop();
				x = x + 1;
				push(x);
			}
			else
			{
				pop();
				x = pow(x, 2);
				push(x);
			}
		}

	}
	printf("%d\n", pop());
	system("pause");
	return 0;
}