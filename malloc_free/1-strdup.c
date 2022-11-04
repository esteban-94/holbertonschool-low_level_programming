#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - Entry point
 *@str: value type unsigned integer
 *Return: type char
 */
char *_strdup(char *str)
{
	int i, pi;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	ptr = malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (pi = 0; str[pi] != '\0'; pi++)
		ptr[pi] = str[pi];
	ptr[pi] = '\0';
	return (ptr);
}
