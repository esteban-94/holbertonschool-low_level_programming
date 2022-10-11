#include "main.h"
/**
 * print_last_digit - prints last digit of an integer.
 * Return: Return 1 if is alphabetic character or 0 otherwise.
 */
int print_last_digit(int n)
{
	char i;

	i = ((abs(n % 10)) + '0');
	_putchar(i);
	return (abs(n % 10));
}
