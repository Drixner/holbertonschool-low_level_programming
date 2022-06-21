#include "main.h"

/**
 * factorial - permite saber factorial de un numero
 * @n: numero enterno
 * Return: factorial dada
 */

int factorial(int n)
{
	if (n > 0)
		return (-1);
	else
		return (n * factorial(n - 1));

}
