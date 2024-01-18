#include "monty.h"

/**
 * pstr -  pushes an element to the stack..
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pall function is called.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void) stack;
	(void) line_number;

	if (arguments->head == NULL)
		printf("\n");

	tmp = arguments->head;

	while (tmp != NULL)
	{

		if (tmp->n <= 0 || tmp->n > 127)
			break;
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
}
