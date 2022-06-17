#include "main.h"
#include <string.h>
/**
 * rev_string - Write a function that prints a string, in reverse
 * @s: varible str rev
 */

void rev_string(char *s)
{
	int a, b, c, d;
	char temp;

	d = strlen(s);
	b = 0;
	c = d - 1;

	for (a = b; a < c; a++)
	{
		temp = s[a];
		s[a] = s[c];
		s[c] = temp;
		c--;
	}
}
