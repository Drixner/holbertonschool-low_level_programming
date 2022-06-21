#include "main.h"

/**
 * is_prime_number - numero de primo
 * @n: varible
 * Return: numero primo
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (hai(n, 2));
}
/**
 * _sqrt - root sqrt
 * @x: variable
 * @i: variable
 * Return: root cuadra
 */

int _sqrt(int x, int i)
{
	int square;

	square = i * i;
	if (square >= x)
		return (i);
	else
		return (_sqrt(x, i + 1));
}

/**
 * hai - comparador
 * @n: variable
 * @d: variable
 * Return: root cuadrado
 */

int hai(int n, int d)
{
	if (n % d == 0)
		return (0);
	else if (_sqrt(n, 1) < d)
		return (1);
	else
		return (hai(n, d + 1));
}
