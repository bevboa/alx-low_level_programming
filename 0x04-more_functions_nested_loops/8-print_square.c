#include "main.h"

/**
 * print_square - prints square followed by a new line
 * @size: size of a square
 *
 */

void print_square(int size)

{
	int n, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			for (m = 0; m < size; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
