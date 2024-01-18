#include "monty.h"

/**
 * swap -  reverse the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pall function is called.
 */
void swap(stack_t **stack, unsigned int line_number)
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
	tmp1->next = tmp2->next;
	if (tmp1->next)
		tmp1->next->prev = tmp2;
	tmp2->next = tmp1;
	tmp2->prev = NULL;
	tmp1->prev = tmp2;
	arguments->head = tmp2;
}
