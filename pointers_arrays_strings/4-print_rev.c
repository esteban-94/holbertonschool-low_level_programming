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
/**
* _strlen - function strlen
*@s: to probe
* Return: return j
*/
int _strlen(char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(s + i) != '\0')
	{
		j = j + 1;
		i++;
	}
	return (j);
}
