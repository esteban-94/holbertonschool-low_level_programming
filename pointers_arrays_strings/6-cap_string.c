#include "main.h"
/**
 * *cap_string - function task 6
 * @a: to probe
 * Return: a
*/
char *cap_string(char *a)
{
	int i, j, k;
	char b[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	j = _strlen(a);
	if (a[0] >= 97 && a[0] <= 122)
		a[0] = a[0] - 32;
	for (i = 0; i < j; i++)
	{
		for (k = 0; k <= 12; k++)
		{
			if (a[i] == b[k])
				if (a[i + 1] >= 97 && a[i + 1] <= 122)
					a[i + 1] = a[i + 1] - 32;
		}
	}
	return (a);
}
/**
* _strlen - function
*@s: to probe
* Return: j
*/
int _strlen(char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(s + i) != '\0')
	{
		j = j + 1;
		i++;
	}
	return (j);
}
