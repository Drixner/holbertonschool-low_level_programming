#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - suma de todos los argumentos
 * @n: cantidad de numeros (entero)
 * Return: 0 is n is 0 or return sum
 */
int sum_them_all(const unsigned int n, ...);
{
	va_valist numbers;
	int sum;
	unsigned int i;

	if (n == 0) /*validando*/
		return (0);
	suma = 0;
	va_start(numbers, n);

	/* integrando */

	for (i = 0; i < n; i++)
		suma += va_arg(numers, int);
	va_end(valist);

	return (sum);
}
