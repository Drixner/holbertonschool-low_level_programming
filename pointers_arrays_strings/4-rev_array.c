#include "main.h"

/**
 * reverse_array - permite cambiar de posicion a un array
 * @a: recuerso
 * @n: entero
 *
 */

void reverse_array(int *a, int n)
{
	int x, temp;

	n -= 1;

	for (x = 0; x < n; x++, n--)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
	}
}
