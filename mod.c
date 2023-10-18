#include "monty.h"
/**
 * f_mod - computes the remainder of the division of the top two stack elements
 *
 * @head: A pointer to the head of the stack (doubly linked list)
 * @counter: The line number where the function was called
 *
 * Description: This function computes the remainder of the division of the top two
 * elements of the stack. It updates the result as the new top element in the stack.
 * If the stack does not have at least two elements or if the division by zero is
 * attempted, it reports an error and exits the program.
 */
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
