#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - imprime el nombre del archivo
 * @argc: argument count
 * @argv: arguments pass to main as a array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (0);
}
