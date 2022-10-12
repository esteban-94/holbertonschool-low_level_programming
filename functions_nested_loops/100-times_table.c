#include "main.h"
/**
 * print_times_table - prints n times table.
 * @n: to prove
 * Return: void function not have return.
 */
void print_times_table(int n)
{
	int i, j, k;

	if (0 <= n && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
					_putchar('0');
				else
				{
					if (10 <= k && k < 100)
					{
						_putchar(' ');
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
					}
					else if (k < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar((k % 10) + '0');
					}
					else
					{
						_putchar((k / 100) + '0');
						_putchar((k / 10) % 10 + '0');
						_putchar((k % 10) + '0');
					}
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
