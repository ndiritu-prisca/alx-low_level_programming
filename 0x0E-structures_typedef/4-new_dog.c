#include "dog.h"
#include <stdlib.h>

/**
  * _strcpy - a function that copies a string src to dest
  * @dest:where string will be copied to
  * @src: string to be coiped
  * Return: pointer to new string
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
  * new_dog - a function that creates a new dog.
  * @name: name of dog
  * @age: age of dog
  * @owner: Owner of dog
  * Return: struct pointer
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len1, len2;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	for (len1 = 1; name[len1] != '\0'; len1++)
		;
	new_dog->name = malloc(sizeof(*name) * len1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	for (len2 = 1; owner[len2] != '\0'; len2++)
		;
	new_dog->owner = malloc(sizeof(*owner) * len2);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
