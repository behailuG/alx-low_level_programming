#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - main method
 * @argc: number of argument
 * @argv: argument value
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	unsigned long mul = 1;
	int i = 1, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < 48 && argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
			j++;
		}
		mul *= atol(argv[i]);
		i++;
	}
	printf("%lu\n", mul);
	return (0);
}
