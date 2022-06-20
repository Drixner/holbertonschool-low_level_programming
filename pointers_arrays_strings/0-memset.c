#include "main.h"
/**
 * *_memset - permite evuluar
 * @s:constante 
 * @b: el valor
 * @n: numeros de elementos.
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
