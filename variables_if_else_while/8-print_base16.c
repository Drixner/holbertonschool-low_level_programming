#include <stdio.h>
/**
 * main - Entry point
 * putchar : imprime letras mayusculas y minusculas
 * Return: Always 0 (zero = success)
 */
int main(void)
{
int n;
/* operando desde caracter */
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
/* operando desde caracter */
for (n = 'a'; n <= 'f'; n++)
{
putchar(n);
}
putchar(10);
return (0);
}
