#include <stdio.h>
/**
 * main - lower case except q and e
 * Return: Always 0.
 */
int main(void)
{
char lower[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
if (lower[i] != 'q' && lower[i] != 'e')
putchar(lower[i]);
}
putchar('\n');
return (0);
}
