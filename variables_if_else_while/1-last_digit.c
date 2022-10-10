#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print a random number and his description.
 * Return: Return 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("is %i and is greater than 5\n", n % 10);
	else if (n % 10 == 0)
		printf("is %i and is 0\n", n % 10);
	else
		printf("is %i and is less than 6 and not 0\n", n % 10);
return (0);
}
