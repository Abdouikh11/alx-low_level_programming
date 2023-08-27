#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - function that initialize variables of type
 * @d:The  pointer to use malloc
 * @name: the anme of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
