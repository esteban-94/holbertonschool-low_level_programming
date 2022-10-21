#include "main.h"
/**
 * reverse_array - function task 4
 * @a: to probe
 * @n: to probe
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	if (n > 0)
	{
		for (i = 0; i <= (n / 2); i++)
		{
			tmp = a[n - i - 1];
			a[n - i - 1] = a[i];
			a[i] = tmp;
		}
	}
}
