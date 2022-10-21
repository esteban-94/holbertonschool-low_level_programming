#include "main.h"
/**
* *_strcat - function task 0
*@dest: to probe
*@src: to probe
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	j = _strlen(dest);
	k = _strlen(src);
	for (i = j ; i < (j + k); i++)
		*(dest + i) = *(src + (i - j));
	return dest;
}
