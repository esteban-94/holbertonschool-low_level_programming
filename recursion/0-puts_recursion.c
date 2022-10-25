#include "main.h"
/**
 * _puts_recursion - function task 0
 *@s: to probe
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
