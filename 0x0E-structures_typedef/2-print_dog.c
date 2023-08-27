#include "dog.h"

/**
 * print_dog - Function that prints a struct dog
 * @d: the pointer to use malloc
 *
 *
 **/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
