#include "main.h"
/**
 * _sqrt_recursion - function task 5
 *@n: to probe
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 1;
	return fun2((n, i));
}
/**
 *fun2 -auxiliar function
 *@n: to probe
 *@i: to probe
 * Return: i
 */
int fun2(int n, int i)
{
	if (n / i == i)
		return (i);
	else if (i < n)
		return (fun2(n, i + 1));
	else
		return (-1);
}
