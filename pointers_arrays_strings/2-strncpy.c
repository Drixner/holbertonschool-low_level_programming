#include "main.h"

/**
 * _strncpy - función que permite copiar de un recursos.
 * @dest: array de destino.
 * @src: recurso.
 * @n: indice del cual se copiará
 * Return: (value)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
