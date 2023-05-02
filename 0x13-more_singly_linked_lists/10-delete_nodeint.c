#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked-list at a certain index
 * @head: pointer to the first element in the list
 * @indx: index of the node to be  deleted
 *
 * Return: 1 (pass), or -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int indx)
{
	listint_t *tmp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (indx == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < indx - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}


	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}

