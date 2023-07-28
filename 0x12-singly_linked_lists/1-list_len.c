#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements
 * @h: pointer the list_t
 *
 * Return: number elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
