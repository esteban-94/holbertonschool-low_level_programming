#include "main.h"
/**
* *_memset - function task 0
* @s: to probe
* @b: to probe
* @n: to probe
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
