#include "dog.h"

/**
  * init_dog - a function that initialize a variable of type struct dog
  * @d: pointer to struct dog
  * @name: pointer to the name string
  * @age: pointer to age
  * @owner: pointer to owner string
  * Return: nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
