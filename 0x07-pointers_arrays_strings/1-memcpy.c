#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of copied memory
 * @src: address from which memory is copied
 * @n: maximum number of memory to be copied
 * Return: address of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
