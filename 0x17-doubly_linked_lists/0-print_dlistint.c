#include "lists.h"
#include <stdio.h>
/**
 * print_dlintint - print all the elements of a dlinstint_t list
 * @h: doubly linked list node
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	for (; h; h = h->next, size++)
		printf("%d\n", h->n);
	return (size);
}
