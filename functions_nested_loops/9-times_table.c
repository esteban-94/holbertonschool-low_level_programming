#include "main.h"
/**
 * times_table - prints 9 times table.
 * Return: Return 1 if is alphabetic character or 0 otherwise.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(j % 10 + '0');
            _putchar(',');
            _putchar(' ');
        }
    }
}