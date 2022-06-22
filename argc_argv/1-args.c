#include "main.h"
#include <stdio.h>

/**
 * main - imprime el nombre del archivo
 * @argc: argument count
 * @argv: arguments pass to main as a array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);

}
