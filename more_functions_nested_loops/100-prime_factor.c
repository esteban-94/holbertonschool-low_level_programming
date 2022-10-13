#include <stdio.h>
/**
 * main - Print prime factors of 612852475143.
 * Return: Always 0.
 */
int main(void)
{
	long i, j;

    i = 612852475143;
    j = 2;
    while (j < i)
    {
        if ((i % j) == 0)
        {
            printf("%d,", j);
            i = (i / j)
        }
        else
            j++;
    }
	printf("\n");
	return (0);
}
