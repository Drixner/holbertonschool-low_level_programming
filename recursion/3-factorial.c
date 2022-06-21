#include "main.h"

/**
 * factorial - permite saber factorial de un numero
 * @n: numero enterno
 * Return: factorial dada
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));

}
