#include "main.h"
/**
* _strspn - function task 3
*@s: to probe
*@accept: to probe
* Return: i
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (s[i] != accept[j])
			break;
	}
	return (i);
}
