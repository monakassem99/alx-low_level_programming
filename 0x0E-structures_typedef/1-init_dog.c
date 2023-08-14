#include <stdlib.h>
#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    strcpy(d->name, name);
    d->age = age;
    strcpy(d->owner, owner);
}