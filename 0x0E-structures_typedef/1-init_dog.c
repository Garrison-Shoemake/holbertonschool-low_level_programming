#include "holberton.h"
#include "dog.h"
/**
 * init_dog - function name
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * @d: struct from header
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	struct dog d;

	d.name = name;
	d.age = age;
	d.owner = owner;

}
