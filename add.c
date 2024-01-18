#include "monty.h"

/**
 * add -  add first two elements of stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pall function is called.
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1;
	stack_t *tmp2;
	(void) stack;

	if (arguments->stack_len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		freeAll();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguments->head;
	tmp2 = tmp1->next;
	tmp2->n = tmp1->n + tmp2->n;
	deleteNode();
	arguments->stack_len -= 1;
}
