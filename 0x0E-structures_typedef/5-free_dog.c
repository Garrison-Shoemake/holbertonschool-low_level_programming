#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - function name
 * @d: struct to free
 */
void free_dog(dog_t *d)
{
	free(d);
	free((*d).name);
        free((*d).owner);

}
