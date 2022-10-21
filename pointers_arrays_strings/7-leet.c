#include "main.h"
/**
* *leet - function task 7
*@a: to probe
* Return: a
*/
char *leet(char *a)
{
	int i, k;
	char b[] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
	char c[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (a[i] == b[k])
				a[i] = c[k];
		}
	}
	return a;
}
