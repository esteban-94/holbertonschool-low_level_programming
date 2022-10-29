#include <stdio.h>
#include <stdlib.h>
/**
 * main - function task 100
 * @argc: to probe
 * @argv: to probe
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mon[5] = {1, 2, 5, 10, 25};
	int i, cent, coin;

	coin = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
		printf("0\n");
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (cent / mon[i] > 0)
			{
				coin += cent / mon[i];
				cent = cent % mon[i];
			}
		}
		printf("%d\n", coin);
	}
	return (0);
}
