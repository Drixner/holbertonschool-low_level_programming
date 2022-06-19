#include "main.h"
/**
 * _strcmp - compara dos fuente de caracteres
 * @s1: primer recurso
 * @s2: segundo recurso
 * Return: (0)
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0); /* los string son iguales*/
	}
	else
	{
		return (*s1 - *s2);
	}
}
