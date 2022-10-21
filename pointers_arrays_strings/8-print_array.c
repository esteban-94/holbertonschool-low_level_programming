#include "main.h"
#include <stdio.h>
/**
 * print_array - function task 8
 * @a: to probe
 * @n: to probe
 */
void print_array(int *a, int n)
{
	int x = 0;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
			printf(", ");
	}
	printf("\n");
}
