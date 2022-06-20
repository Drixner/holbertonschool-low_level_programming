#include "main.h"
/**
 * *_memset - permite evuluar
 * @s: Constante
 * @b: El valor
 * @n: Numeros de elementos
 * Return: s[]
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		s[h] = b;
	}
	return (s);
}
