#ifndef DOG_H
#define DOG_H
/**
 * struct dog - fucntion that gives info about a dog
 *
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog my_dog;

#endif
