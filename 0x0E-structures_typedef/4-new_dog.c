#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - a function that creates a new dog.
  * @name: name of dog
  * @age: age of dog
  * @owner: Owner of dog
  * Return: struct pointer
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *new_name;
	char *new_owner;
	int len1, len2, i;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (NULL);
	}
	for (len1 = 1; *name != '\0'; len1++, name++)
		;
	new_name = malloc(sizeof(*name) * len1);
	if (new_name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0;  *name != '\0'; i++, name++)
		new_name[i] =  *name;
	new_name[i] = '\0';

	for (len2 = 1; *owner != '\0'; len2++, owner++)
		;
	new_owner = malloc(sizeof(*owner) * len2);
	if (new_owner == NULL)
	{
		free(new_name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; *owner != '\0'; i++, owner++)
		new_owner[i] = *owner;
	new_owner[i] = '\0';

	ndog->name = new_name;
	ndog->age = age;
	ndog->owner = new_owner;
	return (ndog);
}
