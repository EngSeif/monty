#include "monty.h"

/**
 * freeArgs - Free Arguments
 * Description - Takes No Parameters
 */

void freeArgs(void)
{
	if (arguments == NULL)
		return;
	if (arguments->instructs)
	{
		free(arguments->instructs);
		arguments->instructs = NULL;
	}

	freeHead();

	if (arguments->line)
	{
		free(arguments->line);
		arguments->line = NULL;
	}

	free(arguments);
}

/**
 * freeHead - Free Stack Head
 * Description - Takes No Parameters
 */

void freeHead(void)
{
	if (arguments->head)
		freeStack(arguments->head);
	arguments->head = NULL;
}
/**
 * freeStack - Free All Stack
 * @head: Head of stack
 */
void freeStack(stack_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
	{
		freeStack(head->next);
	}
	free(head);
}

/**
 * freeAll - Collects All Free Functions
 * Description - Takes No Parameters
 */
void freeAll(void)
{
	CloseFile();
	FreeTokens();
	freeArgs();
}
