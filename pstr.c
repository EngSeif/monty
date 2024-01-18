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

	while(tmp != NULL)
	{
		
		if ((tmp->n >= 65 && tmp->n <= 90) || (tmp->n >= 97 && tmp->n <= 123))
		{
		printf("%c", tmp->n);
		}
		else
		{
			break;
		}
		tmp = tmp->next;
	}
	printf("\n");
}
