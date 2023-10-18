#include "monty.h"
/**
 * f_stack - Sets the stack mode
 *
 * @head: A pointer to a pointer to the top of the stack (not used)
 * @counter: The current line number of the Monty bytecode file (not used)
 *
 * Description: This function sets the stack mode to be used for future
 * `push` instructions, effectively making the stack operate as a stack.
 * It takes two parameters but doesn't make any modifications to the stack
 * itself. Instead, it sets the global variable `bus.lifi` to 0, indicating
 * stack mode.
 */
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
