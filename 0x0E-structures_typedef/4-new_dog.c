#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that gets a length of string
 *
 * @s: string
 *
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int i = 0;


	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - a function that return dest with a copy of a string from src
 *
 * @dest: copy string to this
 * @src: string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);

}

/**
 * new_dog - function that creates a new dog
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: pointer to the new dog, NULL if the function fails
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

