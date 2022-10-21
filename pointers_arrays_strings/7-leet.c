#include "main.h"
/**
* *leet - function task 7
*@a: to probe
* Return: a
*/
char *leet(char *a)
{
	int i, j, k;
	char b[] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
	char c[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	j = _strlen(a);
	for (i = 0; i < j; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (a[i] == b[k])
				a[i] = c[k];
		}
	}
	return a;
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
