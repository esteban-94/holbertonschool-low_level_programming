#include "main.h"
/**
* _strcpy - function task 9
* _strlen - function
*@dest: to probe
*@src: to probe
*/
char *_strcpy(char *dest, char *src)
{
	int i, j;

	j = _strlen(src);
	for (i = 0; i <= j; i++)
	{
		*(dest + i) = *(src + i);
		if (i == j)
			*(dest + i) = '\0';
	}
	return (dest);
}
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
