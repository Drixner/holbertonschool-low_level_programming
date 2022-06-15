#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal line on the terminal
 *@n : integer
 */

void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(32);
		}
		_putchar(92);

		if (x < (n - 1))
		{
		_putchar(10);
		}
	}
	_putchar(10);
}
