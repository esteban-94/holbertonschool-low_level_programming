#include "main.h"
/**
* swap_int - function task 1
*@a: to probe
*@b: to probe
*/
void swap_int(int *a, int *b)
{
	int i;
	
	i = *a;
	*a = *b;
	*b = i;
}
