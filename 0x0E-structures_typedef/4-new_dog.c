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
	int i;

	for (i = 0; *src != '\0'; i++, src++)
	{
		dest[i] = *src;
	}
	dest[i] = '\0';
	return (dest);
}

/**
  * _strlen - a function that gives the length of string
  * @s: string
  * Return: length
  */
int _strlen(char *s)
{
	int i = 1;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
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
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (NULL);
	}
	ndog->name = malloc(len1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(len2);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	_strcpy(ndog->name, name);
	_strcpy(ndog->owner, owner);
	ndog->age = age;
	return (ndog);
}
