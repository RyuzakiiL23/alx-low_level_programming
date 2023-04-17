#include "dog.h"
#include <stdio.h>

/**
* print_dog - print struct d
* @d: struct dog
* Return : void
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
		{
			printf("Owmer: (nil)\n");
		}
		printf("Owner: %s\n", d->owner);
	}
}
