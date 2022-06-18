#include "main.h"

/**
 * _strcpy - copia el contenido de src a destino, incluyendo el valor nulo.
 *
 * @dest: array vacio a llenar
 *
 * @src: contenido o fuente
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
