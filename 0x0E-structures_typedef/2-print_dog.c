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
		d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
		d->age == NULL ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}

}
