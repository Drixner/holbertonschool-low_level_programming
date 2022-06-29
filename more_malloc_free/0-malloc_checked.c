#include "main.h"

/**
 * malloc_checked - alojar memoria usando malloc.
 * @b: unsingned int memory size to allocate
 * Return: 92
 *
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
