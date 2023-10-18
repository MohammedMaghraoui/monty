#include "monty.h"
/**
 * free_stack - frees a stack (doubly linked list)
 *
 * @head: A pointer to the head of the stack
 *
 * Description: This function iterates through the stack, freeing each node
 * and its data. It properly updates the pointers to avoid memory leaks.
 */
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
