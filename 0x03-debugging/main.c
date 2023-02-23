#include <stdio.h>

/**
* main - tests function that prints if integer is positive or negative
* positive_or_negative - positive or negative
* @i: parameter
* Return: 0
*/

void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive", i);
	else if (i == 0)
		printf("%d is zero", i);
	else
		printf("%d is negative", i);
}
int main(void)
{
        int i;

        i = 0;
        positive_or_negative(i);

        return (0);
}
