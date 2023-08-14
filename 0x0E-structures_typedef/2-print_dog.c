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

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else if ((isdigit(d->age)))
		printf("Age: (nil)\n");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
