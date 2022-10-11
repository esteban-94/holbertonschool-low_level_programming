#include "main.h"
/**
 * _islower - checks for lowercases.
 * Return: Return 1 if is lowercase or 0 otherwise.
 */
int _islower(int c)
{
	if (c > 96 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
