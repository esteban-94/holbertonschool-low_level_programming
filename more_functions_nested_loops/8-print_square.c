#include "main.h"
/**
 * print_square - Print a square with # symbol.
 *@size: to prove
 * Return: void function not have return.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0 ; i < n; i++)
	{
		for (j = 0 ; j < n; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
