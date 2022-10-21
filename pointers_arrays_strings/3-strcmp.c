#include "main.h"
/**
 * _strcmp - function task 3
 *@s1: to probe
 *@s2: to probe
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int x, y;

	y = _strlen(s1);
	x = 0;
	while (x < y)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
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
