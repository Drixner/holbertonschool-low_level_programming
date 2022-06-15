#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal
 *@n : integer
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar(10);
}
