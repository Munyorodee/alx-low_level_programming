#include <stdio.h>
#include "main.h"
#include <stdlib.c>

/**
 * main - multiplication of two number argument passed to program
 * @argc: argument counter
 * @argv: arguments to multiply
 * Return: 0 on success, 1 if two numbers not given
 */

int main(int argc, char *argv[])
{
		int calc = 0;

		if (argc == 3)
		{		
				 calc = atoi(argv[1] * atoi(argv[2]);
				printf("%d\n", c);
		}
		else
		{
				printf("Error\n");
				return(1);
		}
		return (0);
}

