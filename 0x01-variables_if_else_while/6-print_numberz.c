#include <stdio.h>

/**
 * main - print single digits of base_ten starting from null
 *
 * Return:Always 0
 *
 */

int main(void)

{

	int c;

	c = 0;

	while (c < 10)

	{

		putchar(c + '0');

		c++;

	}

	putchar('\n');

	return (0);

}
