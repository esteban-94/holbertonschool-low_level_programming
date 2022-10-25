#include "main.h"
/**
 * _puts_recursion - function task 2
 *@s: to probe
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
