#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function task 8
 * @a: to probe
 * @size: to probe
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	j = size * size - 1;
	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[j - (size - 1) - i * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
