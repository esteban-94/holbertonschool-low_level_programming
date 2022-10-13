#include "main.h"
/**
 * print_diagonal - Print a diagonal line.
 *@n: to prove
 * Return: void function not have return.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0 ; i < n; i++)
	{
        for (j = 0 ; j < n; j++)
        {
		    _putchar(0);
            _putchar(92);
        }
	}
	_putchar('\n');
}
