#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - create new dog
  * @name: name of new dog
  * @age: age of new dog
  * @owner: owner of the new dog
  * Return: new dog containing pointer
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len = 0, owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen(name) + 1;
		owner_len = _strlen(owner) + 1;
		new_dog = malloc(sizeof(dog_t));
		if (new_dog == NULL)
			return (NULL);
		(*new_dog).name = malloc(sizeof(char) * name_len);
		if ((*new_dog).name == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		(*new_dog).owner = malloc(sizeof(char) * owner_len);
		if ((*new_dog).owner == NULL)
		{
			free((*new_dog).name);
			free(new_dog);
			return (NULL);
		}
		(*new_dog).name = _strcpy((*new_dog).name, name);
		(*new_dog).owner = _strcpy((*new_dog).owner, owner);
		(*new_dog).age = age;
	}
	return (new_dog);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  * Return: String length
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
