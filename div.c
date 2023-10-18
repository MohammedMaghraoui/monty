#include "monty.h"
/**
 * f_div - divides the second top element of the stack by the top element
 *
 * @head: A pointer to the head of the stack (doubly linked list)
 * @counter: The line number where the function was called
 *
 * Description: This function divides the second top element of the stack by the top
 * element. It updates the result as the new top element in the stack. If the stack
 * does not have at least two elements or if the top element is zero, it reports an
 * error and exits the program.
 */
void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
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
	aux = h->next->n / h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
