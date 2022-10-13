#include "main.h"
#include "main.h"
/**
 * print_triangle - Print a triangle with # symbol.
 *@size: to prove
 * Return: void function not have return.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0 ; i < size; i++)
	{
		for (j = 0 ; j < size; j++)
		{
			if (j <= (size - i))
				_putchar(32);
			else
				_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
