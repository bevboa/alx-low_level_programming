#include <stdio.h>

/**
 * main - prints upper and lowercase alphabets
 *
 * Return:Always 0
 *
 */

int main(void)

{

	char x;

	char y;

	x = 'a';

	y = 'A';

	while (x <= 'z')

	{

		putchar(x);

		x++;

	}

	while (y <= 'Z')

	{

		putchar(y);

		y++;

	}

	putchar("\n");

	return (0);

}
