#include "main.h"
/**
 * main - Prints an integer.
 * Return: Void function not have return.
 */
void print_number(int n)
{
    int q, w, e, r, t, y, u, i, o, p;

    if (n >=1000000000 && n <= 2147483647)
    {
        q = n / 1000000000;
        _putchar(q + 48);
        w = (n / 100000000) % 10;
        _putchar(w + 48);
        e = (n / 10000000) % 10;
        _putchar(e + 48);
        r = (n / 1000000) % 10;
        _putchar(r + 48);
        t = (n / 100000) % 10;
        _putchar(t + 48);
        y = (n / 10000) % 10;
        _putchar(y + 48);
        u = (n / 1000) % 10;
        _putchar(u + 48);
        i = (n / 100) % 10;
        _putchar(i + 48);
        o = (n / 10) % 10;
        _putchar(o + 48);
        p = n % 10;
        _putchar(p + 48);
    }
}
