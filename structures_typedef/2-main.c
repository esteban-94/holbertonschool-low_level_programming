#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints dog´s data.
 * @d: dog´s data.
*/
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	print_dog(&my_dog);
	return (0);
}
