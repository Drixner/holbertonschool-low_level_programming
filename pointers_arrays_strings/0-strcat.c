#include "main.h"
/**
 * _strcat - concaqueta caracteres
 * @src: recurso
 * @dest: destino al que se guardarĂ¡
 * Return: (dest+src)
 *
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	for (y = 0; src[y] != '\0'; x++, y++)
	{
		dest[x] = src[y];
	}
	dest[x] = '\0';

	return (dest);
}
