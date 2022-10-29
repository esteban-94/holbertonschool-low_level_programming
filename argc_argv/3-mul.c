#include <stdio.h>
#include <stdlib.h>
/**
 * main - function task  3
 * @argc: to probe
 * @argv: to probe
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i, j;

	j = 1;
	for (i = 1; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);

		j = j * x;
	}
	if (argc < 3)
		printf("Error\n");
	else
		printf("%d\n", j);
	return (0);
}
