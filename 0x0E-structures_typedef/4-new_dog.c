#include "dog.h"
#include <string.h>

/**
 * new_dog - function that's creats a new dog
 * @name: name of the dog
 * @age: age of that dog
 * @owner: owner of this dog
 * Return: retrun a pointer to the nwe dog of NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int i;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(strlen(name) + 1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		ndog->name[i] = name[i];
	ndog->name[i] = '\0';
	ndog->age = age;
	ndog->owner = malloc(strlen(owner) + 1);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		ndog->owner[i] = owner[i];
	ndog->owner[i] = '\0';
	return (ndog);
}
