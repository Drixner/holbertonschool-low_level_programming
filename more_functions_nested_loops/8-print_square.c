#include "main.h"

/**
 *print_square - Write a function that prints a square, followed by a new line
 *@size : space square
 */
void print_square(int size)
{
	int y, x;

	y = 0;

	if (size < 1)
	{
		_putchar(10);
	}

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		y++;
		_putchar(10);
	}
}
