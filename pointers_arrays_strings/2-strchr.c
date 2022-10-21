#include "main.h"
/**
* *_strncpy - function task 2
*@s: to probe
*@c: to probe
* Return: 0
*/
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);

	return (0);
}
