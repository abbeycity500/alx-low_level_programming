#include "lists.h"

/**
 * listint_int - function that return the nunber of element in a linked list
 * @h: pointer to the first element
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}