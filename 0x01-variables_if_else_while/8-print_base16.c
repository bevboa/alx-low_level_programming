#include <stdio.h>

/**
 * main - all numbers of base sixteen
 *
 * Return:Always 0
 *
 */

int main(void)

{

	char c;

	int d;

	c = 'a';

	while (d < 10)

	{

		putchar(d + '0');

		d++;

	}

	while (c <= 'f')

	{
		putchar(c);

		c++;
	}

	putchar('\n');

	return (0);

}