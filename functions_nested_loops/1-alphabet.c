#include "main.h"

/**
 * print_alphabet - imprime el alphabeto en minusculas
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
