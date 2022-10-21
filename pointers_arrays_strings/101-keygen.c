#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function task 101
 */
int main(void)
{
	int con[50];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 50; i++)
	{
		con[i] = rand() % 78;
		sum += (con[i] + '0');
		putchar(con[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
