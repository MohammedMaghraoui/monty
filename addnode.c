#include "monty.h"
/**
 * addnode - adds a new node at the beginning of a doubly linked list (stack)
 *
 * @head: A pointer to the head of the doubly linked list
 * @n: The value to store in the new node
 *
 * Description: This function creates a new node with the given value 'n' and adds
 * it at the beginning of a doubly linked list. The new node becomes the new head.
 * If the list is empty, the new node is added as the first element.
 */
void addnode(stack_t **head, int n)
{

	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
