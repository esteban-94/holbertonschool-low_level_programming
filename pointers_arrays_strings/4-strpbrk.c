#include "main.h"
/**
 * *_strpbrk - function task 4
 * @s: to probe
 * @accept: to probe
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
