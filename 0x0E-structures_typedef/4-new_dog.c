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
	for (len1 = 1; name[len1] != '\0'; len1++)
		;
	new_name = malloc(sizeof(*name) * len1);
	if (new_name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		new_name[i] =  name[i];
	new_name[i] = '\0';

	for (len2 = 1; owner[len2] != '\0'; len2++)
		;
	new_owner = malloc(sizeof(*owner) * len2);
	if (new_owner == NULL)
	{
		free(new_name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		new_owner[i] = owner[i];
	new_owner[i] = '\0';

	ndog->name = new_name;
	ndog->age = age;
	ndog->owner = new_owner;
	return (ndog);
}
