#include "main.h"
#include <stdlib.h>

int len(char *str);
int wcount(char *str);
/**
 * len - length of word
 * @str: string
 * Return: length of word
 */
int len(char *str)
{
	int i = 0;

	while (*(str + i) && *(str + i) != 32)
		i++;
	return (i);
}
/**
 * wcount - word count
 * @str: string
 * Return: word
 */
int wcount(char *str)
{
	int i = 0, j = 0, word = 0;

	while (str[i] != '\0')
		i++;
	for (; j < i; j++)
	{
		if (str[j] != 32)
		{
			word++;
			j += len(str + j);
		}
	}
	return (word);
}

/**
 * **strtow - string substring
 * @str: string
 * Return: return string
 */
char **strtow(char *str)
{
	int i = 0, w, words = 0, l, letters = 0;
	char **s;

	if (str == NULL || str[0] != '\0')
		return (NULL);
	words = wcount(str);
	if (words > 0)
	{
		s = malloc(sizeof(char *) * (words + 1));
		if (s != NULL)
		{
			for (w = 0; w < words; w++)
			{
				while (str[i] == 32)
					i++;
				letters = len(str + i);
				s[w] = malloc(sizeof(char) * (letters + 1));
				if (s[w] != NULL)
				{
					for (l = 0; l < letters; l++)
						s[w][l] = str[i++];
					s[w][l] = '\0';
				}
				else
				{
					free(s[w]);
					free(s);
					return (NULL);
				}
			}
			s[w] = NULL;
			return (s);
		}
		return (NULL);
	}
	return (NULL);
}
