#include "main.h"

/**
 * _isalpha - Write a function that checks for lowercase character.
 * @c : variable de caracter
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
