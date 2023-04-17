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
		!(d->name) ? printf("Name: (nil)\n") : printf("Name: %d\n", d->name);
		!(d->age) ? printf("Age: (nil)\n") : printf("Age: %d\n", d->age);
		!(d->owner) ? printf("Owner: (nil)\n") : printf("Owner: %d\n", d->owner);
	}

}
