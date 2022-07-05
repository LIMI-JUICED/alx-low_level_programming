#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - new dog 
 * 
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of the dog
 *
 * Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogo;

	dogo = malloc(sizeof(dog_t));
	if (dogo == NULL)
		return (NULL);
	if (name == NULL)
		dogo->name = NULL;
	else
	{
		dogo->name = malloc(_strlen(name) + 1);
		if (dogo->name == NULL)
		{
			free(dogo);
			return (NULL);
		}
		dogo->name = _strcpy(dogo->name, name);
	}
	if (owner == NULL)
		dogo->owner = NULL;
	else
	{
		dogo->owner = malloc(_strlen(owner) + 1);
		if (dogo->owner == NULL)
		{
			free(dogo->name);
			free(dogo);
			return (NULL);
		}
		dogo->owner = _strcpy(dogo->owner, owner);
	}
	dogo->age = age;
	return (dogo);
}
/**
 * _strlen - gets len of str
 * @s: string to get length
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * _strcpy - copies string from src to dest
 *
 * @dest: pointer to destination of string
 * @src: pointer to surce string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src)
		*a++ = *src++;
	*a = '\0';
	return (dest);
}
