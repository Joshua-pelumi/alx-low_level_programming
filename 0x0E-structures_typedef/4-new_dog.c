#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - another dog :)
 * @name: of the dog
 * @age: of the dog
 * @owner: of thr dog
 *
 * Return: pointer to a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new->name == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new->owner == NULL)
	{
		free(new->owner);
		free(new);
		return (NULL);
	}

	new->name = strcpy(new->name, name);
	new->age = age;
	new->owner = strcpy(new->owner, owner);

	return (new);
	free(new);
}
