#include "main.h"
/**
 * string_toupper - function task 5
 * @scr: to probe
 * Return: scr
 */
char *string_toupper(char *scr)
{
	int i, j;

	j = _strlen(scr);
	for (i = 0; i < j; i++)
	{
		if (scr[i] >= 97 && scr[i] <= 122)
			scr[i] = scr[i] - 32;
	}
	return (scr);
}
/**
* _strlen - function
*@s: to probe
* Return: j
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
