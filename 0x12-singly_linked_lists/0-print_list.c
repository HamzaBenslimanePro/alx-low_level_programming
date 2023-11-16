#include "lists.h"
#include <stdio.h>

/*
 * print_list - print data and position in a list
 * @h: pointer to the list list_t
 * Return: return number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0](nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
