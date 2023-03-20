#include "dog.h"

/**
  * init_dog - init dog struct
  * @d: A dog
  * @name: name
  * @age: age
  * @owner: owner
  * Return:
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
