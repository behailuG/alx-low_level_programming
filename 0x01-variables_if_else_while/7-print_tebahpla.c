#include <stdio.h>
/**
 * main - reverse order
 * Return: Always 0.
 */
int main(void)
{
char lower[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 25; i >= 0; i--)
putchar(lower[i]);
putchar('\n');
return (0);
}
