#include "main.h"
#include <stdlib.h>
/**
  * *_realloc - reallocate memory based on new size
  * @ptr: pointer
  * @old_size: old size
  * @new_size: new size
  * Return: new allocated memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
			return (NULL);
		return (s);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < new_size; i++)
	{
		if (i < old_size)
			s[i] = ((char *) ptr)[i];
		else
			break;
	}
	free(ptr);
	return (s);
}
