#include "main.h"
/**
 * more_numbers - Print the numbers from 0 to 14 ten times.
 * Return: void function not have return.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i <= 9; i++)
	{
		for (j = 48 ; j <= 57; j++)
		{
		_putchar(j);
		}
	}
	_putchar('\n');
}
