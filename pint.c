#include "monty.h"
/**
 * f_pint - prints the value at the top of a doubly linked list (stack_t)
 *
 * @head: A pointer to the head of the stack (doubly linked list)
 * @counter: The line number where the function was called
 *
 * Description: This function prints the integer value at the top of a
 * doubly linked list (stack_t). If the stack is empty, it displays an error
 * message and exits with an error code.
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
