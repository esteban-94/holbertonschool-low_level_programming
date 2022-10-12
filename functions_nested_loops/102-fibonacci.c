#include <stdio.h>
/**
 * print_to_98 - prints until 98.
 * Return: Return 1 if is alphabetic character or 0 otherwise.
 */
int main(void)
{
    int i, j;
    j = 1;
    for (i = 0; i <= 49; i + j)
    {
        j = j + i;
        printf("%i, ", j);
    }
    printf("\n");
    return (0);
}