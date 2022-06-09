#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (zero = success)
 */
int main(void)
{
int n;
/* a=97 - z =122 */
for (n = 122; n >= 97; n--)
{
putchar(n);
}
putchar(10);
return (0);
}
