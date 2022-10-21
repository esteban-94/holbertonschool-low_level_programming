#include "main.h"
/**
 * rev_string - function task 5
 * @s: to probe
 */
void rev_string(char *s)
{
	char tmp;
	int i, j;

	j = _strlen(s) - 1;
	for (i = 0; i <= (j / 2); i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + (j - i));
		*(s + (j - i)) = tmp;
	}
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
