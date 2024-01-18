#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pall function is called.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void) stack;

	if (arguments->head == NULL)
	{
		fprintf(stderr, "L%d: can't pop, stack empty\n", line_number);
		freeAll();
		exit(EXIT_FAILURE);
	}

	tmp = arguments->head;
	arguments->head = tmp->next;
	free(tmp);
	arguments->stack_len--;
}
