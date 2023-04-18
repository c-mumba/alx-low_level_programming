#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dogo = malloc(sizeof(struct dog));

	if (new_dogo == NULL)
	{
		return (NULL);
	}

	(*new_dogo).name = malloc(sizeof(name));

	if ((*new_dogo).name == NULL)
	{
		free(new_dogo);
		return (NULL);
	}

	strcpy((*new_dogo).name, name);

	(*new_dogo).age = age;

	(*new_dogo).owner = malloc(sizeof(owner));

	if ((*new_dogo).owner == NULL)
	{
		free((*new_dogo).name);
		free(new_dogo);
		return (NULL);
	}
	strcpy((*new_dogo).owner, owner);
	return (new_dogo);
}

