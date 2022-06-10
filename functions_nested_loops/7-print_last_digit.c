#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n : variable de comparación
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	int digito = n % 10;

		if (digito < 0)
		{
			digito = (digito * -1);
		}
			_putchar(digito + '0');
			return (digito);
}
