#include "main.h"

/**
 * -sqrt_recursoion - raiz cuadrada
 * @n: numero entero a operar
 * @Return: si no es raiz cuadra natarul devuelve -1
 */

int _sqrt_recursion(int n)
{
	return (halp(n, 1));
}
/**
 * halp - funcion que permite resolver
 * @x: determina la raiz cuadrada 
 * @i: integrador
 */

int halp(int x, int i)
{
	int square;

	square = i * i;

	if (square == x)
		return (i);
	else if (square < x)
		return (halp(x, i + 1));
	else
		return (-1);
}
