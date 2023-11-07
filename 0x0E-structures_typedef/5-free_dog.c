#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog structure.
 * @d: Pointer to a dog_t structure.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}

free(d->name);
free(d->owner);
free(d);
}
