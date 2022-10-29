#include <stdio.h>
/**
 * main - function task 2
 * @argc: to probe
 * @argv: to probe
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
