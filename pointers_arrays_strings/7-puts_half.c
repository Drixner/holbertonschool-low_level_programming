#include "main.h"
#include <string.h>

/**
 * puts_half - Write a function that prints half of.
 *@str : varible de caracteres
 *
 */

void puts_half(char *str)
{
	int len;
	int i;

	len = strlen(str);

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len / 2) + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
