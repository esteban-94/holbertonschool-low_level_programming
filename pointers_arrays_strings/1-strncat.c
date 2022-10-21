#include "main.h"
/**
* *_strncat - function task 1
*@dest: to probe
*@src: to probe
*@n: to probe
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = _strlen(dest);
	for (i = 0 ; i < n; i++)
	{
		*(dest + (i + j)) = *(src + i);
		if (*(src + i) == '\0')
			break;
	}
	return (dest);
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
