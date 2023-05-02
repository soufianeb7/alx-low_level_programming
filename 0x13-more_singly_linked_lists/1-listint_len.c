#include "lists.h"

/**
 * listint_len - returns the numb of elements in a linked list
 * @h: linked list of type listint_t to traverse
 *
 * Return: numb of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}

	return (numb);
}

