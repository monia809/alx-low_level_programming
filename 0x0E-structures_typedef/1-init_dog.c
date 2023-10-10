#include "dog.h"

/**
 * init_dog -  initial
 *
 * @d: dog
 *
 * @name: firts
 *
 * @age: secon
 *
 * @owner: third
 *
 * Description: non
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;

		d->age = age;

		d->owner = owner;
	}
}
