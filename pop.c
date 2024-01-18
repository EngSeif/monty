#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pall function is called.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;

	if (arguments->head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		freeAll();
		exit(EXIT_FAILURE);
	}

	deleteNode();
	arguments->stack_len-=1;
}
