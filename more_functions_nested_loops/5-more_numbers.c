#include "main.h"

/**
 * print_most_numbers - print 0 to 9
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
				_putchar(j / 10 + '0');

			_putchar(j % 10 + '0');
			j++;
		}

		_putchar(10);
		i++;
	}
}
