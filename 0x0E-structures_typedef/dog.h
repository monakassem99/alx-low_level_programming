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
#endif
