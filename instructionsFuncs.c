#include "monty.h"

/**
 * get_instructions - get instructions from file
 * Description - Takes No Parameters
 */
void get_instructions(void)
{
	int i;
	instruction_t instructions[] = {
		{"push", &push}, {"pall", &pall},
		{"pint", &pint}, {"pop", &pop},
		{"swap", &swap}, {"add", &add},
		{"nop", &nop}, {"sub", &sub},
		{NULL, NULL}
	};

	if (arguments->Num_tok == 0)
		return;
	for (i = 0; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(instructions[i].opcode, arguments->tokens[0])
				== 0)
		{
			arguments->instructs->opcode = instructions[i].opcode;
			arguments->instructs->f = instructions[i].f;
			return;
		}
	}
	invalid_instructs();
}

/**
 * Run_instruct - Run Given Instruction
 * Description - Takes No Parameters
 */
void Run_instruct(void)
{
	stack_t *stack = NULL;

	if (arguments->Num_tok == 0)
		return;
	arguments->instructs->f(&stack, arguments->line_number);
}
