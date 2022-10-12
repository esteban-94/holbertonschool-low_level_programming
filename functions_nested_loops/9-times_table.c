#include "main.h"
/**
 * times_table - prints 9 times table.
 * Return: void function not have return.
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if ((k / 10) == 0 && j != 0)
				_putchar(' ');
			else if (j != 0)
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
