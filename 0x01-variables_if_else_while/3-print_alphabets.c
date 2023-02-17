#include <stdio.h>
/**
 * main - lower and upper case
 * Return: Always 0.
 */
int main(void)
{
char lower[26] = "abcdefghijklmnopqrstuvwxyz";
char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 26; i++)
{
putchar(lower[i]);
}
int j;
for (j = 0; j < 26; j++)
{
putchar(upper[j]);
}
putchar('\n');
return (0);
}
