#include "stdio.h"

/**
 * main - funiciòn principal para fizz y buzz
 * Description: factores multiples.
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
