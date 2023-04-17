# include <stdio.h>
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

	if (name == NULL || age == NULL || owner == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
