#include <stdio.h>

/**
 * main - display argument
 * @argc:integer
 * @argv:string
 * Return:integer
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
