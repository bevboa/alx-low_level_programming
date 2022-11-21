#include "main.h"

/**
 * print_triangle - print a triangle followed by a new line
 * @size: size of triangle
 */

void print_triangle(int size)

{
	int t, r, k;

	if (size <= 0)
		_putchar('\n');
	for (t = 0; t < size; t++)
	{
		for (r = size - t; r > t; r--)
			_putchar(' ');
		for (k = t + r; k >= 1; k--)
			_putchar('#');
		_putchar('\n');
	}
}
