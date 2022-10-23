#include "main.h"

/**
 * print_triangle - print a triangle followed by a new line
 * @size: size of triangle
 */

void print_triangle(int size)

{
	int t, r;

	if (size > 0)
	{
		for (t = 1; t <= size; t++)
			_putchar('#')
		{
			for (r = 0; r <= t; r++)
				_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('#');

	if (size <= 0)
	{
		_putchar('\n');
	}
}
