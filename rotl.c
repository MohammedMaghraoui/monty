#include "monty.h"
/**
 * f_rotl - rotates the stack to the top
 *
 * @head: A pointer to the head of the stack (doubly linked list)
 * @counter: An unused parameter for line number tracking
 *
 * Description: This function rotates the stack to the top by moving the last element
 * to the front. It does so by adjusting the pointers accordingly.
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
