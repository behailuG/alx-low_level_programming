#include <stdio.h>
/**
 * main - remove repeted numbers
 * Return: Always 0.
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (i == j || j < i)
continue;
putchar((i % 10) + '0');
putchar((j % 10) + '0');
if (i == 8 && j == 9)
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
