#include <stdio.h>

/**
 * main - Punto de entrada
 *
 * Return: siempre 0 (afirmativo)
 */

int main(void)
{
int a;
char b;
long int c;
long long int d;
float e;

printf("Size of a char: %zu byte(s)\n", sizeof(a));
printf("Size of a int: %zu byte(s)\n", sizeof(b));
printf("Size of a long int: %zu byte(s)\n", sizeof(c));
printf("Size of a long long int: %zu byte(s)\n", sizeof(d));
printf("Size of a float: %zu byte(s)\n", sizeof(a));
return (0);
}
