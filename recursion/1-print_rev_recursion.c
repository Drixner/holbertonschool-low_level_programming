#include "main.h"
/**
 * _puts_recursion - funcion to string
 * @s: valor del string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s +1);
		_putchar(*s);
	}
}
