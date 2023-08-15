#include "dog.h"

/**
 * init_dog: function that initialize variables of type
 * @d:The  pointer to use malloc
 * 
 *
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
