#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>


/**
 * struct dog - fucntion that gives info about a dog
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Description: Longer
 */
struct dog {
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog we had before
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
