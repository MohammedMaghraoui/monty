#include "monty.h"
/**
 * f_pstr - prints the characters in the stack as a string
 *
 * @head: A pointer to the head of the stack (doubly linked list)
 * @counter: The line number where the function was called
 *
 * Description: This function prints the characters in the stack as a string until it
 * encounters a non-printable character (outside the ASCII range [1, 127]) or a NULL
 * character (0). It then prints a newline character to terminate the string.
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
