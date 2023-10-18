#include "monty.h"
/**
 * f_queue - changes the behavior to a queue (FIFO)
 *
 * @head: A pointer to the head of the stack (doubly linked list)
 * @counter: The current line number for error tracking
 *
 * Description: This function changes the behavior of the program to a queue (FIFO)
 * by setting the 'bus.lifi' variable to 1. This means elements will be removed from
 * the front of the stack in future operations.
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - adds a new node at the end of a doubly linked list (queue)
 *
 * @head: A pointer to the head of the doubly linked list
 * @n: The value to store in the new node
 *
 * Description: This function creates a new node with the given value 'n' and adds
 * it at the end of a doubly linked list. If the list is empty, the new node becomes
 * the head.
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
