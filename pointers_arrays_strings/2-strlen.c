#include "main.h"
/**
* _strlen - function task 2
*@s: to probe
* Return: return j
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
