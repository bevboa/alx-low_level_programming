#include <stdio.h>

/**
 * main - display number of arguments
 * @argc:integer
 * @argv:string
 * Return:int
 */

int main(int argc, char *argv[] __attribute__((unused)))

{
		printf("%d\n", argc - 1);
	return (0);
}
