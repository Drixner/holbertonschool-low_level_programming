#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a struct dog
 * @d: pointer tu elemento dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		;
	else
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
