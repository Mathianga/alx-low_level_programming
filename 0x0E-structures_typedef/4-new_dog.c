#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * _strcpy - a function that copies a string from
 * a from a given source to a given destination
 * @dest: string destination
 * @src: string source
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0, x = 0;

	while (*(src + length) != '\0')
	{
		length++;
	}

	for ( ; x < length ; x++)
	{
		dest[x] = src[x];
	}
	dest[length] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
