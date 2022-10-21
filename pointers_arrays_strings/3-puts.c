#include "main.h"
/**
 * _puts - function task 3
 * @str: to probe
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
