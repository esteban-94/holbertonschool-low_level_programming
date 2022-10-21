#include "main.h"
/**
 * _atoi - function task 100
 * @s: to probe
 * Return: j
 */
int _atoi(char *s)
{
	int i, j;
	int sig;

	sig = 0;
	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 45)
			sig = sig + 1;
		else if (s[i] >= 48 && s[i] <= 57)
			j = (j * 10) + (s[i] - '0');
		else if (j > 0)
			break;
	}
	if (sig % 2 != 0)
		j = j * -1;
	return (j);
}
