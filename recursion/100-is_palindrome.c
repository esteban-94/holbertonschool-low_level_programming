#include "main.h"
/**
 * is_palindrome - function task 100
 * @s: to probe
 * Return: 1
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);

	if (i <= 1)
		return (1);
	return (pal1(s, i - 1, 0));
}
/**
 * _strlen_recursion - auxiliar function
 * @s: to probe
 * Return: lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
/**
 * pal1 - auxiliar function
 * @s: to probe
 * @end: to probe
 * @i: to probe
 * Return: 1
 */
int pal1(char *s, int end, int i)
{
	if (s[end] == s[i] && (i == end - 1 || i == end))
		return (1);
	if (s[end] != s[i])
		return (0);
	return (pal1(s, end - 1, i + 1));
}
