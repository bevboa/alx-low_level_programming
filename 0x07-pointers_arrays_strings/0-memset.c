#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: address or memory area to be filled
 * @b: constant byte or allowed number of bytes
 * @n: maximum space to be filled
 * Return: address of s
 */

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
