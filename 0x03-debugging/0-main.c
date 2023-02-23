#include "main.h"
#include <stdio.h>
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
* positive_or_negative - positive or negative
* @i: parameter
*/
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);
	return (0);
}
