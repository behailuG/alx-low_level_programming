#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* positive_or_negative - positive or negative
* @i: parameter
* Return: 0
*/

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%s", "Positive");
	else if (i == 0)
		printf("%d", 0);
	else
		printf("%s", "Negative")
}
int main(void)
{
        int i;

        i = 0;
        positive_or_negative(i);

        return (0);
}
