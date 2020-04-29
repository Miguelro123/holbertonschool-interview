#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

 /**
  * insert_node - Adds a new node at the right position.
  * @head: Pointer of the first node of listint_t list.
  * @number: Integer to be included in new node.
  * Return: Address of the new element or NULL if it fails.
  */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *current;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		if (current->n > new->n)
		{
			new->next = current;
			*head = new;
			return (*head);
		}
		else
		{
			while (current->next->n < new->n && current->next != NULL)
			{
				current = current->next;
			}
			new->next = current->next;
			current->next = new;
			return (new);
		}
	}
}
