#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints until 98.
 * Return: Return 1 if is alphabetic character or 0 otherwise.
 */
void print_to_98(int n)
{
    int i, j;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            printf("%i", i);
            if (i != 98)
                printf(", ");
            else if (i == 98)
                printf("\n");
        }
    }
    else
    {
        for (j = 98; j >= n; j--)
        {
            printf("%i", j);
            if (j != n)
                printf(", ");
            else if (j == n)
                printf("\n");
        }
    }   
}