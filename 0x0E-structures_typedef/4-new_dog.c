# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "dog.h"

/**
* new_dog - function that creates a new dog.
* @name: name of the new dog
* @age: age of the new dog
* @owner: owner of the new dog
* Return: dog_t dog or NULL on fail.
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age <= 0 || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
