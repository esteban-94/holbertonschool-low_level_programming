#include <stdio.h>
#include <stdlib.h>
/**
 * main - function task 4
 * @argc: to probe
 * @argv: to probe
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		k = 0;
		for (i = 1; i < argc; i++)
		{
			for (j = 0; *(argv[i] + j) != '\0'; j++)
			{
				if (*(argv[i] + j) >= 48 && *(argv[i] + j) <= 57)
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			k += atoi(argv[i]);
		}
		printf("%d\n", k);
		return (0);
	}
}
