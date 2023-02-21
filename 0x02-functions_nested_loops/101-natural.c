#include <stdio.h>
/**
 * main - multiple
 * Return: Always 0.
 */
int main(void)
{
	int i, sum=0;

	for(i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5)==0)
		{
			printf("%d", sum += i);
		}
	}
	printf("\n");
	return (0);
}
