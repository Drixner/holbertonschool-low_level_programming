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
	int h;

	for (h = 0; h > 0; h++, n--)
	{
		s[h] = b;
	}
	return (s);
}
