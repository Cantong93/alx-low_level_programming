#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t
 * @head: The head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *enode;

	while (head)
	{
		enode = head;
		head = head->next;
		free(enode);
	}
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
