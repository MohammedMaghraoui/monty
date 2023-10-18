#include "monty.h"
/**
 * f_add - adds the top two elements of a doubly linked list (stack_t)
 *
 * @head: A pointer to the head of the stack (doubly linked list)
 * @counter: The line number where the function was called
 *
 * Description: This function adds the values of the top two elements in a
 * doubly linked list (stack_t). If the stack contains less than two elements,
 * it displays an error message and exits with an error code.
 */
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
