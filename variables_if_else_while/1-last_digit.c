#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print a random number and his description.
 * Return: Return 0.
*/
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = (n % 10);
	if (m > 5)
		printf("is %i and is greater than 5\n", m);
	else if (m == 0)
		printf("is %i and is 0\n", m);
	else
		printf("is %i and is less than 6 and not 0\n", m);
return (0);
}
