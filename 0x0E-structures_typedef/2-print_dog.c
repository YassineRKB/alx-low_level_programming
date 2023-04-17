# include <stdio.h>
# include "dog.h"

/**
* print_dog - function that prints a struct dog
* @d: instance of struc dog
**/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		(d.name != NULL) ? printf("Name: (nil)") : printf("Name: %d\n", d.name);
		(!d.age) ? printf("Age: (nil)") : printf("Age: %d\n", d.age);
		(!d.owner) ? printf("Owner: (nil)") : printf("Owner: %d\n", d.owner);
	}

}
