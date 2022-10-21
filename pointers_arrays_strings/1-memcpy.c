#include "main.h"
/**
* *_memcpy - function task 1
* @dest: to probe
* @src: to probe
* @n: to probe
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return dest;
}
