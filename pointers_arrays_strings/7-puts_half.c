#include "main.h"
#include <string.h>

/**
 * puts_half - Write a function that prints half of.
 *@str : varible de caracteres
 *
 */

void puts_half(char *str)
{
	int i;

	i = strlen(str);

	for (i /= 2; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
