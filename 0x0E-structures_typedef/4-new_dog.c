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
	int len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
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
		return (NULL);
	}
	for (len1 = 0; *name != '\0'; len1++, name++)
		;
	new_name = malloc(sizeof(*new_name) * (len1 + 1));
	if (new_name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (len2 = 0; *owner != '\0'; len2++, owner++)
		;
	new_owner = malloc(sizeof(*new_owner) * (len2 + 1));
	if (new_owner == NULL)
	{
		free(new_name);
		free(ndog);
		return (NULL);
	}
	_strcpy(new_name, name);
	_strcpy(new_owner, owner);
	ndog->name = new_name;
	ndog->age = age;
	ndog->owner = new_owner;
	return (ndog);
}
