#include "main.h"

/**
 * print_rev - Write a function that prints a string, in reverse
 * @s : varible str rev
 */

void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;

	for (x--; x >= 0; x--)
		_putchar(s[x]);

	_putchar(10);
}
