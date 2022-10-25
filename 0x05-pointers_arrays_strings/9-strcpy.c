#include "main.h"

/**
 * _strcpy - copies pointed  to src
 * @dest: destination
 * @src: string
 * Return: string
 */

char *_strcpy(char *dest, char *src)

{

	int lens = 0;

	while (*(src + lens) != '\0')
	{
		*(dest + lens) = *(src + lens);
		lens++;
	}

	*(dest + lens) = '\0';
	return (dest);
}
