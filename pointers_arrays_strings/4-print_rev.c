#include "main.h"
/**
 * print_rev - function task 4
 * @s: to probe
 */
void print_rev(char *s)
{
	int i, j;
	
	j = _strlen(s) - 1;
	for (i = j; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
