#include <stdio.h>

/**
 * main - combinations of single digit numbers
 *
 * Return:Always 0
 *
 */

int main(void)

{
	int a;

	for (a = 0; a < 10; a++)

	{

		putchar(a + '0');

		if (a < 9)

		{

			putchar(',');
			putchar(' ');

		}

	}

		putchar('\n');

		return (0);

}