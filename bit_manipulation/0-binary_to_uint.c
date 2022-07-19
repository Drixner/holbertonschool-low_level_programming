#include "main.h"

/**
 * binary_to_uint - funcion que apunta al la cadadena de string
 * @b: puntero de cadena
 * Return: i
 */

unsigned int binary_to_uint(const char *b)
{
	long int i;

	if (*b == NULL)
		return (0);

	for (i = 0; *b; b++)
	{
		if (*b == 1)
			i = (i << 1) | 1;
		else if (*b == '0')
			i <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (i);
}
