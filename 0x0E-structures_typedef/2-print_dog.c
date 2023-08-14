#include "dog.h"
#include <math.h>
#include <ctype.h>

/**
 * print_dog -  prints a struct
 * @d: pointer to struct
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else if (d->owner == NULL)
		printf("Owner: (nil)\n");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
