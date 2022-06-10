#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character.
 * @c : variable de caracter
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
