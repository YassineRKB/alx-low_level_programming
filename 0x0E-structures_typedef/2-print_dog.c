# include <stdio.h>
# include "dog.h"

/**
* print_dog - function that prints a struct dog
* @d: instance of struc dog
**/
void print_dog(struct dog *d)
{
	if (d)
	{
		!(d->name) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
		!(d->age) ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);
		!(d->owner) ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
	}

}
