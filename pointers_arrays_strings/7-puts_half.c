#include "main.h"
/**
 * puts_half - function task 7
 * @str: to probe
 */
void puts_half(char *str)
{
	int i, j, k, a;

    j = _strlen(str) - 1;
	k = _strlen(str) / 2;
	a = _strlen(str) % 2;
	for (i = (k + a); i <= j; i++)
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
