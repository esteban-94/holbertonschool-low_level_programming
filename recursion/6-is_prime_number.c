#include "main.h"
/**
 * is_prime_number - function task 6
 * @n: to probe
 * Return: prime
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	else
		return (prime(n, i));
}
/**
 * prime - auxiliar function.
 * @n: to probe
 * @i: to probe
 * Return: 1
*/
int prime(int n, int i)
{
	if (n % i == 0 && i < n)
		return (0);
	else if (n % i != 0)
		return (prime(n, i + 1));
	return (1);
}
