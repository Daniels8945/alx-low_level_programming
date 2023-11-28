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
		return;

	printf("%s\n", d->name ? d->name : "Name: (nil)\n");
	printf("%f\n", d->age);
	printf("%s\n", d->owner);

}
