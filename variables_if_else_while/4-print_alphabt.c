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
if (n != 113 && n != 101)
{
putchar(n);
}
}
putchar(10);
return (0);
}
