#include "main.h"

/**
 * print_triangle - Write a function that prints a triangle, followed by a new line.
 * @size : varible de espacio.
 * Description: factores multiples.
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j, rows;

	rows = size;

	for (i = 1; i <= rows; i++)
	{
		for (j = i; j < rows; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	if (rows <= 0)
		_putchar(10);
}
