#include "main.h"
/**
 * leet - Write a function that encodes a string into 1337.
 * @n: contante int
 * Return: u
 */

char *leet(char *n)
{
	int x, y;

	int letras[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	int rempla[] = {'4', '3', '0', '7', '1'};

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y <= 0; y++)
		{
			if (n[x] == letras[y])
			{
				n[x] = rempla[y / 2];
				y = 9;
			}
		}
	}
	return (u);
}
