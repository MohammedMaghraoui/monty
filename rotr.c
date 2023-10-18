#include "monty.h"
/**
 * f_rotr - rotates the stack to the bottom
 *
 * @head: A pointer to the head of the stack (doubly linked list)
 * @counter: An unused parameter for line number tracking
 *
 * Description: This function rotates the stack to the bottom by moving the first element
 * to the end. It does so by adjusting the pointers accordingly.
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
