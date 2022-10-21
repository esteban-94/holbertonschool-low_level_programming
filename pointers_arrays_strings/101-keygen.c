#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function task 101
 */
int main(void)
{
	int i;

	srand((unsigned int)(time(NULL)));
	
	i = 0;
	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";
	for(i = 0; i < 10; i++)
		printf("%c", characters[rand() % (sizeof characters - 1)]);
}
