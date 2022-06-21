#include "main.h"

/**
 * _sqrt_recursion - raiz cuadrada a trabajar.
 * @n: numero entero a operar
 * Return: si no es raiz cuadra natarul devuelve -1
 */

int _sqrt_recursion(int n)
{
	return (halp(n, 1));
}
/**
 * halp - funcion que permite resolver
 * @x: determina la raiz cuadrada
 * @i: integrador
 * Return: -1
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
