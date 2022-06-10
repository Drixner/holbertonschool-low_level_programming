#include "main.h"

/**
 * _abs - Write a function that computes the absolute value of an integeri
 * @n : variable de comparación
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
