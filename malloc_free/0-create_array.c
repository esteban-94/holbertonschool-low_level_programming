#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - Entry point
 *@size: value type unsigned integer
 *@c: value tipe char
 *Return: type char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	if (size == 0)
		return ('\0');

	return (ptr);
}
