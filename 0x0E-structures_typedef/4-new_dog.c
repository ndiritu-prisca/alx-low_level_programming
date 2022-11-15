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
	dog_t *ndog;
	char *new_name;
	char *new_owner;
	int len1, len2;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (len1 = 1; name[len1] != '\0'; len1++)
		;
	new_name = malloc(sizeof(*name) * len1);
	if (new_name == NULL)
	{
		free(new_name);
		free(ndog);
		return (NULL);
	}
	for (len2 = 1; owner[len2] != '\0'; len2++)
		;
	new_owner = malloc(sizeof(*owner) * len2);
	if (new_owner == NULL)
	{
		free(new_owner);
		free(new_name);
		free(ndog);
		return (NULL);
	}
	_strcpy(new_name, name);
	_strcpy(new_owner, owner);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	return (ndog);
}
