#include "main.h"

/**
 * print_array - Write a function that prints n elements
 *@a : pointer of array
 *@n : pointer of array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
}