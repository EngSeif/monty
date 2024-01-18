#include "monty.h"

/**
 * pint - prints the value at the top of the stack, followed by a new line.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pall function is called.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	(void) stack;

	if (arguments->head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		freeAll();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", arguments->head->n);
}
