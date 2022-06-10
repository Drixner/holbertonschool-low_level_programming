#include "main.h"

/**
 * print_alphabet - imprime el alphabeto en minusculas
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
		_putchar(10);
	}
}
