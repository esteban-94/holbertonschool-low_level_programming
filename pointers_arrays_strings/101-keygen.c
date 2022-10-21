#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function task 101
 */
int main(void)
{
	int i;
	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";
	
	srand((unsigned int)(time(NULL)));

	i = 0;
	for(i = 0; i < 10; i++)
	{
		printf("%c", characters[rand() % (sizeof characters - 1)]);
	}
	return (0);
}
