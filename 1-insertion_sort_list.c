#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list
 * @list: Double pointer to the head of the linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (current = (*list)->next; current != NULL; current = tmp)
	{
		tmp = current->next;
		insert = current->prev;
		while (insert != NULL && current->n < insert->n)
		{
			if (insert->prev != NULL)
				insert->prev->next = current;
			else
				*list = current;

			if (current->next != NULL)
				current->next->prev = insert;

			insert->next = current->next;
			current->prev = insert->prev;
			current->next = insert;
			insert->prev = current;

			print_list(*list);
			insert = current->prev;
		}
	}
}
