#include "monty.h"

/**
 * push -  pushes an element to the stack..
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pall function is called.
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int n;
	(void) stack;

	if (arguments->head == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		freeAll();
		exit(EXIT_FAILURE);
	}

	tmp = arguments->head;
	n = tmp->n;

	if ((n >= 65 && n <= 90) || (n >= 97 && n <= 123))
	{
		printf("%c\n", n);
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		freeAll();
		exit(EXIT_FAILURE);
	}
}
