#include "main.h"
/**
* *rot13 - function task 100
*@a: to probe
* Return: a
*/
char *rot13(char *a)
{
	int i, k;
	char b[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
	78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99,
	100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112,
	113, 114, 115, 116, 117, 118, 119, 120, 121, 122};
	char c[] = {78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
	65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 110, 111,
	112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 97, 98,
	99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (k = 0; k <= 51; k++)
		{
			if (a[i] == b[k])
				a[i] = c[k];
		}
	}
	return (a);
}
