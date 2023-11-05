//#include "dog.h"
//#include <stdio.h>
//#include <stdlib.h>

/**
 * print_dog - xxxxxxxxxxxxxxxxxxxx
 * @d: xxxxxxxxxxxxxxxxxxxxxx
 * Return: void
 */
/*
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (*d).name ? (*d).name : "(nil)");
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nil)");
	}
}*/

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
