#include "lists.h"

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *current;

	current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return(NULL);
	new->n = number;
	new->next = NULL;

	if (head == NULL)
	{
		*head = new;
		return (new);
	}

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	if (number < 0 && (*head)->n <= 0)
	{
		new->next = (*head);
		(*head)= new;
		return (new);
	}

	while (current->next != NULL && abs(number) >= abs(current->next->n))
		current = current->next;
	new->next = current->next;
	current->next = new;

	return (new);
}
