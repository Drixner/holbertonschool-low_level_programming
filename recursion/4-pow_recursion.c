#include "main.h"

/**
 * _pow_recursion - permite saber factorial de un numero
 * @x: numero enterno
 * @y: numero de base
 * Return: -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
