#include <stdlib.h>
#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    /* d = malloc(sizeof(struct dog));*/
    dog doog;
    doog.name = name;
    (*d).age = age;
    (*d).owner = owner;
}
