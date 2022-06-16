#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a : varible int
 * @b : varible int
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *b;
	*b = *a;
	*a = z;
}
