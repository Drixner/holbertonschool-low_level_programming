#include "main.h"

/**
 * print_binary - representar binario con dato entrada
 * @n: entero de in
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);

	_putchar((n & 1) + '0');
}
