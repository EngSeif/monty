#include "monty.h"

/**
 * malloc_failed - Exit when there is Wrong Dynamic Allocation
 * Description - Takes No Parameter
 */
void malloc_failed(void)
{
	fprintf(stderr, "malloc failed\n");
	freeArgs();
	exit(EXIT_FAILURE);
}

/**
 * IsWrongInputArgs - Gives Error if more than 2 Args
 * @argc: number of command line parameters
 */
void IsWrongInputArgs(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * FailedToOpen - Gives Error if File Cannot be Opened
 * @FileName: name of the file that was supposed to be opened
 */
void FailedToOpen(char *FileName)
{
	fprintf(stderr, "Can’t open file %s\n", FileName);
	freeArgs();
	exit(EXIT_FAILURE);
}

/**
 * invalid_instructs - if instruction not found in Command array
 * Description - Takes No Parameters
 */
void invalid_instructs(void)
{
	fprintf(stderr, "L%d: unknown instruction %s\n",
	arguments->line_number, arguments->tokens[0]);
	freeAll();
	exit(EXIT_FAILURE);
}
