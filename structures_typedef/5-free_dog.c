#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog structure
 * @d: pointer to struct dog
 *
 * Description: This function frees the memory allocated for
 * the structure members and the structure itself.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
/* Free the memory allocated for name and owner strings */
free(d->name);
free(d->owner);
/* Free the memory allocated for the dog_t structure */
free(d);
}
}
