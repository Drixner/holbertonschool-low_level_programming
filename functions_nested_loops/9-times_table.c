#include "main.h"
/**
 * times_table - Write a function that prints the 9 times table.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int i; /* factor */
	int j; /* contador */
	int m; /* valor calculado */

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			m = (i * j);
			if (m <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar(10);
	}
}
