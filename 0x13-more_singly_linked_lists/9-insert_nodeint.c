#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked-list,
 * at a given posts
 * @head: pointer to the first node in the list
 * @indx: index  postion of  the new node
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int indx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (indx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; tmp && i < indx; i++)
	{
		if (i == indx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}

