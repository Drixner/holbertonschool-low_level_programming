#include "main.h"
/**
 * _strncat - concaqueta caracteres
 * @src: recurso
 * @dest: destino al que se guardarái
 * @n: integrador o longitud del array
 * Return: (dest+src)
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	for (y = 0; y < n && src[y] != '\0'; x++, y++)
	{
		dest[x] = src[y];
	}
	dest[x] = '\0';

	return (dest);
}
