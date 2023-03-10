#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main method
 * @argc: number of argument
 * @argv: parameter
 * Return: 1 or 0.
 */
int main(int argc, char *argv[])
{
	int coins = 0, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents > 0)
	{
		while (cents > 0)
		{
			coins++;
			if ((cents - 25) >= 0)
			{
				cents -= 25;
				continue;
			}
			if ((cents - 10) >= 0)
			{
				cents -= 10;
				continue;
			}
			if ((cents - 5) >= 0)
			{
				cents -= 5;
				continue;
			}
			if ((cents - 2) >= 0)
			{
				cents -= 2;
				continue;
			}
			cents--;
		}
		printf("%d\n", coins);
	}
	else
		printf("0\n");
	return (0);
}
