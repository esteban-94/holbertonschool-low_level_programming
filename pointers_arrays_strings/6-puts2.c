#include "main.h"
/**
 * puts2 - function task 6
 * @str: to probe
 */
void puts2(char *str)
{
	int i, j;

	j = _strlen(str) - 1;
	for (i = 0; i <= j; i+=2)
		_putchar(*(str + i));
	_putchar('\n');
}
/**
* _strlen - function task 2
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
