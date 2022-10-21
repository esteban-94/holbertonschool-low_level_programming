#include "main.h"
/**
 * print_array - function task 8
 * @a: to probe
 * @n: to probe
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(*(a + i));
	_putchar('\n');
}
