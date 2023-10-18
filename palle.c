#include "monty.h"
/**
 * f_pall - prints all elements of a doubly linked list (stack_t)
 *
 * @head: A pointer to the head of the stack (doubly linked list)
 * @counter: An unused argument (counter for function calls)
 *
 * Description: This function prints all the elements of a doubly linked list
 * (stack_t). The elements are printed in the order they appear in the list.
 * The function is often used for debugging purposes.
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
