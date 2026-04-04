#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Name to set
 * @age: Age to set
 * @owner: Owner to set
 *
 * Description: This function assigns the parameters to the struct members.
 * It checks if the pointer d is NULL before assignment.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
