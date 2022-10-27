#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append from src
 * @src: string to append to dest
 * Return: address to the string dest
 */

char *_strcat(char *dest, char *src)

{

	int i, j;

	i = j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[i])
	{
		dest[i] = src[j];
			i++;
		j++;
	}
	return (dest);
}
