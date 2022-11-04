#include "main.h"
/**
 *alloc_grid- Entry point
 *@width: value type integer
 *@height: value type integer
 *Return: type char
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int cont;
	int cont2;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	p = malloc(height * sizeof(int *));
	if (p != 0)
	{
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(width * sizeof(int));
			if (p[i] == 0)
			{
				for (; i >= 0; i--)
				{
					free(p[i]);
				}
				free(p);
				return (0);
			}
		}
		for (cont = 0; cont < height; cont++)
		{
			for (cont2 = 0; cont2 < width; cont2++)
			{
				p[cont][cont2] = 0;
			}
		}
		return (p);
	}
	return (0);
}
