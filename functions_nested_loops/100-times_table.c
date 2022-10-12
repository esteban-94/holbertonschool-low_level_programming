#include "main.h"
/**
 * print_times_table - prints n times table.
 * Return: Return 1 if is alphabetic character or 0 otherwise.
 */
void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
            k = i * j;
            _putchar(k / 100 +'0');
			_putchar(k / 10 +'0');
			_putchar(k % 10 +'0');
            if (j < n)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}