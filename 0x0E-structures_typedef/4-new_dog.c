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
	int i;

	if (name == NULL || age < 0 || owner == NULL)
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
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	dog->age = age;
	for (i = 0; owner[i]; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	return (dog);
}
