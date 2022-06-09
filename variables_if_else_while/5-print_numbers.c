#include <stdio.h>
/**
 * main - Entry point
 * putchar : imprime letras mayusculas y minusculas
 * Return: Always 0 (zero = success)
 */
int main(void)
{
int n;
/* 0=48 - 9 =57 */
for (n = 48; n <= 57; n++)
{
putchar(n);
}
putchar(10);
return (0);
}
