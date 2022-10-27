#include "main.h"

/**
 * _strncat - concatenates two strings (it will use at most n bytes from src)
 * @dest: string to append from src
 * @src: string to append to dest(does not need to be null-terminated)
 * @n: largest number of byte to append
 * Return: address of dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
