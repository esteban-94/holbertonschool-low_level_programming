#include "main.h"
/**
* *_strncat - function task 1
*@dest: to probe
*@src: to probe
*@n: to probe
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
	}
	return (dest);
}
