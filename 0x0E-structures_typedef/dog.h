#ifndef BEHAILU
#define BEHAILU

/**
  * struct dog - Dog attributes
  * @name: name.
  * @age: age.
  * @owner: owner.
  * Description: The attributes of a dog.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_two;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
