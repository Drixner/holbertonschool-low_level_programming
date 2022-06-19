#include "main.h"
/**
 * *cap_string - permite modificar y comparar array
 * @n: puntero
 * Return: n
 */
char *cap_string(char *n)
{
	int i, j;
	int espacio = 32;
	int array[12] = {',', ';', '.', '?', '"', '(',
		')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[1] <= 'z')
		{
			n[i] = n[i] - espacio;
		}

		espacio = 0;

		for (j = 0; j <= 12; j++)
		{
			if (n[i] == array[j])
			{
				j = 12;
				espacio = 32;
			}
		}

	}
	return (n);
}
