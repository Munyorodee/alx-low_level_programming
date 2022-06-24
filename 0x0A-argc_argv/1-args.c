#include <stdio.h>
#include "main.h"

/**
 * main -  prints the number of args passed to the program
 * @argc: counts the arguments
 * @argv: argument vector
 * Return (0): returns 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
