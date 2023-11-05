#include "dog.h"

/**
 * init_dog - blabla
 * @name: xxxxxxxxxxxxxx
 * @age: xxxxxxxxxxxxxxxxxxx
 * @owner: xxxxxxxxxxxxxxxxxxxx
 * @d: xxxxxxxxxxxxxxxxxxxxx
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
