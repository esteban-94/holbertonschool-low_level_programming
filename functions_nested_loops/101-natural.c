#include <stdio.h>
/**
 * print_to_98 - prints until 98.
 * Return: Return 1 if is alphabetic character or 0 otherwise.
 */
int main(void)
{
    int i, j;
    for (i = 1; i < 15; i++)
    {
        if ((i % 5) == 0)
            j = i + j;
        if ((i % 3) == 0)
            j = i + j;
    }
    printf("%i", j);
    printf("\n");
    return (0);
}
