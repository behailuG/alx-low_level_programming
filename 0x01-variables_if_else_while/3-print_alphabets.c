#include <stdio.h>
/**
 * main - lower and upper case
 *Return: Always 0.
 */
int main(void)
{
char lower[26]="abcdefghijklmnopqrstuvwxyz";
char upper[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 26; i++)
{
putchar(lower[i]);
putchar(upper[i]);
}
putchar('\n');
return (0);
}
