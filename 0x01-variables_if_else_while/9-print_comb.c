#include <stdio.h>
/**
 * main - single digit comma separation
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i % 10 + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
