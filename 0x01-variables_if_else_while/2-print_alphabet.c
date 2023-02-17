#include <stdio.h>
/**
 * main - lower case
 */
int main(void)
{
char alphabet[26]="abcdefghijklmnopqrstuvwxyz";
int i;
for (i=0; i<26; i++)
{
putchar(alphabet[i]);
}
putchar("\n");
}
