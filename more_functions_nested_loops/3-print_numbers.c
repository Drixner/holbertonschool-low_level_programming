#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9
 * Description: You can only use _putchar twice
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		_putchar(n);

	_putchar(10);
}

