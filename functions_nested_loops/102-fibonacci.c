#include <stdio.h>
/**
 * print_to_98 - prints until 98.
 * Return: Return 1 if is alphabetic character or 0 otherwise.
 */
int main(void)
{
    int i, j;
    for (i = 1; i <= 2; i++)
    {
        for (j = 0; j <= i; j++)
        {
            j = j + i;
            printf("%i, ", j);
        }
    }
    return (0);
}