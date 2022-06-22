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
	int i;

	printf("%d\n", argc);
	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
