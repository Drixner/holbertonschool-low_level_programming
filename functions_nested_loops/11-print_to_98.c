#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Write a function that prints all natural numbers.
 * @n: variable
 */
void print_to_98(int n)
{
	int a; /*contador*/

	if (n <= 98)
	{
		for (a = n; a < 98; a++)
		printf("%d, ", a);
			if (a == 98)
			{
				putchar('9');
				putchar('8');
			}

	}
	else
	{
		for (a = n; a > 98; a--)
		printf("%d, ", a);
			if (a == 98)
			{
				putchar('9');
				putchar('8');
			}
	}
	putchar(10);
}
