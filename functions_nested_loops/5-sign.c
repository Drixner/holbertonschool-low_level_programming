#include "main.h"

/**
 * print_sign - Write a function that prints the sign of a number.
 * @n : variable de comparación
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
			return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
			return (-1);
	}
	else
	{
		_putchar('0');
			return (0);
	}
}
