#include "main.h"
/**
 * main - multiple
 */
int main(void)
{
	int num, i, sum=0;
	num=1024;

	for(i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5)==0)
		{
			printf("%d", sum += i);
		}
	}
}
