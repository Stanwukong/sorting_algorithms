#include "sort.h"

void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2);

/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 *                       ascending order using the 'insertion sort'
 *                       algorithm.
 * @list: Doubly linked list to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *unsorted;

	if (*list == NULL || (*list)->next == NULL)
	return;

	unsorted = *list;

	while (unsorted != NULL)
	{
		listint_t *current = unsorted;

		unsorted = unsorted->next;

		while (current->prev != NULL && current->n < current->prev->n)
		{
		swap_nodes(list, current->prev, current);

		print_list(*list);
		}
	}
}

/**
 * swap_nodes - swap two nodes in a doubly linked list.
 * @list: list containing nodes.
 * @node1: Node to be swapped with @node2.
 * @node2: Node to be swapped with @node1.
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*list = node2;

	if (node2->next != NULL)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}
