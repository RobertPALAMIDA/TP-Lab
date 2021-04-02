#include<stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define MAX_SIZE 4

int Back(int maze[MAX_SIZE][MAX_SIZE], int x, int y, int sol[MAX_SIZE][MAX_SIZE]);

void printSolution(int sol[MAX_SIZE][MAX_SIZE])
{
	for (int i = 0; i < MAX_SIZE; i++)
	{
		for (int j = 0; j < MAX_SIZE; j++)
		{
			if (sol[i][j] == 1)
				printf("(%d,%d) ", i, j);
		}
	}
}

int isValid(int maze[MAX_SIZE][MAX_SIZE], int x, int y)
{
	if (x >= 0 && x < MAX_SIZE && y >= 0 && y < MAX_SIZE && maze[x][y] == 1)
	{
		return 1;
	}

	return 0;
}

int Init()
{
	int(*sol)[MAX_SIZE], i, j;
	sol = malloc(sizeof(int[MAX_SIZE][MAX_SIZE]));
	for (i = 0; i < MAX_SIZE; i++)
	{
		for (j = 0; j < MAX_SIZE; j++)
		{
			if (sol != NULL)
				sol[i][j] = 0;
		}
	}
	return sol;
}

int solveMaze(int maze[MAX_SIZE][MAX_SIZE])
{
	int** sol;

	sol = Init();

	if (Back(maze, 0, 0, sol) == 0)
	{
		printf("Solution doesn't exist");
		return 0;
	}

	free(sol);
	return 1;
}

int isSolution(int x, int y, int sol[MAX_SIZE][MAX_SIZE])
{
	if (x == MAX_SIZE - 1 && y == MAX_SIZE - 1)
	{
		sol[x][y] = 1;
		return 1;
	}
	return 0;
}

int Back(int maze[MAX_SIZE][MAX_SIZE], int x, int y, int sol[MAX_SIZE][MAX_SIZE])
{
	if (isSolution(x, y, sol) == 1)
	{
		printSolution(sol);
		return 1;
	}

	if (isValid(maze, x, y) == 1)
	{
		sol[x][y] = 1;

		if (Back(maze, x + 1, y, sol) == 1)
		{
			return 1;
		}

		if (Back(maze, x, y + 1, sol) == 1)
		{
			return 1;
		}

		sol[x][y] = 0;
		return 0;
	}

	return 0;
}

int main()
{
	int maze[MAX_SIZE][MAX_SIZE] =
	{ {1, 0, 0, 0},
	  {1, 1, 0, 1},
	  {0, 1, 0, 0},
	  {1, 1, 1, 1}
	};

	solveMaze(maze);
	system("pause");
	return 0;
}