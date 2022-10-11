#include "main.h"
/**
 * print_last_digit - prints last digit of an integer.
 * Return: Return 1 if is alphabetic character or 0 otherwise.
 */
int print_last_digit(int n)
{
	char i;

    if (n >= 0)
    {
    	i = ((n % 10) + '0');
        _putchar(i);
	    return (n % 10);
    }
    else
    {
        i = ((-1 * n % 10) + '0');
        _putchar(i);
	    return (-1 * n % 10) ;
    }
}
