#include <stdio.h>
#include "dog.h"

/**
* print_dog - function to print a struct dog.
* @d: pointer to structure
* Return - nill or NULL
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("%s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("%.6f\n", d->age);
		if (d->owner != NULL)
		printf("%s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
