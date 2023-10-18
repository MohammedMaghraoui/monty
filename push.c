#include "monty.h"
/**
 * f_push - Pushes an integer onto the stack
 *
 * @head: A pointer to a pointer to the top of the stack
 * @counter: The current line number of the Monty bytecode file
 *
 * Description: This function pushes an integer onto the top of the stack.
 * It checks if the provided argument is a valid integer and handles any
 * error cases, such as non-integer arguments or memory allocation failures.
 * The function can operate as either a stack or a queue based on the value of
 * the global variable `bus.lifi`.
 */
void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
