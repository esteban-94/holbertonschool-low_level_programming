#include <stdio.h>
/**
 * print_to_98 - prints until 98.
 * Return: Return 1 if is alphabetic character or 0 otherwise.
 */
int main(void)
{
    long int x, y, z, a, b;
    x = 1;
    y = 0;
    z = 0;
    b = 0;
    a = 4000000;
    while (z < a)
    {
        z = x + y;
        y = x;
        x = z;
        if ((z % 2) == 0)
            b = b + z;
    }
    printf("%ld", b);
    printf("\n");
    return (0);
}
