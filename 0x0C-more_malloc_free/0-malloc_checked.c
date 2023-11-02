#include "main.h"

/**
 * malloc_checked - allocate a certainr size in the memory
 * @b: unsigned int used in the function
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		return (98);
	return (p);
}
