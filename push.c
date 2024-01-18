#include "monty.h"

/**
 * push -  pushes an element to the stack..
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pall function is called.
 */
void push(stack_t **stack, unsigned int line_number)
{
	if (arguments->Num_tok <= 1 || !(IsNumber(arguments->tokens[1])))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		freeAll();
		exit(EXIT_FAILURE);
	}


	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		malloc_failed();
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(arguments->tokens[1]);

	if (arguments->head == NULL)
	{
		arguments->head = *stack;
	}
	else
	{
		if (arguments->stack)
		{
			(*stack)->next = arguments->head;
			arguments->head->prev = *stack;
			arguments->head = *stack;
		}
		else
		{
			stack_t *tmp = arguments->head;

			while (tmp->next)
				tmp = tmp->next;
			tmp->next = *stack;
			(*stack)->prev = tmp;
		}
	}
	arguments->stack_len += 1;
}

/**
 * pall - Prints all the elements in the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pall function is called.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (arguments->head == NULL)
		return;

	(void) line_number;
	(void) stack;

	tmp = arguments->head;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
