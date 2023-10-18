#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack
 *
 * @head: A pointer to the head of the stack (doubly linked list)
 * @counter: The line number where the function was called
 *
 * Description: This function multiplies the top two elements of the stack. It updates
 * the result as the new top element in the stack. If the stack does not have at least
 * two elements, it reports an error and exits the program.
 */
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
