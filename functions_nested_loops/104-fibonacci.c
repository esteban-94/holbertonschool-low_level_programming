#include <stdio.h>
/**
 * main - prints fibonacci numbers.
 * Return: Return 0.
 */
int main(void)
{
	double i, x, y, z;

	x = 1;
	y = 0;
	for (i = 0; i <= 97; i++)
	{
		z = x + y;
		y = x;
		x = z;
		printf("%.0f", z);
		if (i < 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
