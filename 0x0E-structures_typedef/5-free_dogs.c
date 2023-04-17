# include <stdlib.h>
# include <stdio.h>
# include "dog.h"

/**
* free_dog - function that to free captured dogs
* @d: instance of the dog
**/

void free_dog(dog_t *d)
{
	if (!d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
