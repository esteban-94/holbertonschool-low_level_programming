#include <stdio.h>
/**
 * print_to_98 - prints until 98.
 * Return: Return 1 if is alphabetic character or 0 otherwise.
 */
int main(void)
{
    int i, j, x, y, z;
    x = 1;
    y = 0;
    for (i = 0; i <= 49; i++)
    {
        z = x + y;
        x = z;
        y = x;
        j = z;
        printf("%i, ", j);
    }
    printf("\n");
    return (0);
}