#include <stdio.h>
/**
 * main - Entry point
 * putchar : imprime letras mayusculas y minusculas
 * Return: Always 0 (zero = success)
 */
int main(void)
{
int n;
/* a=97 - z =122 */
for (n = 97; n <= 122; n++)
{
putchar(n);
}
/* A=65 - Z=90 */
for (n = 65; n <= 90; n++)
{
putchar(n);
}
putchar(10);
return (0);
}
