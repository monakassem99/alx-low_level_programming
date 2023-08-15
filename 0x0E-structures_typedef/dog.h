#ifndef DOG_H
#define DOG_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog details
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

typedef struct dog dog_t;
#endif
