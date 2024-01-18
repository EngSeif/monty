#define _POSIX_C_SOURCE 200809L
#include "monty.h"

argumens_f *arguments = NULL;
/**
* main - Entry point
*
* Description: A C program that Translate ByteCodes
*
* @argc: Number of command line arguments
* @argv: array of command line arguments
* Return: Alawys 0 (Success)
*/

int main(int argc, char **argv)
{
	size_t n = 0;

	IsWrongInputArgs(argc);
	init_args();
	GetFile(argv[1]);

	while (getline(&arguments->line, &n, arguments->stream) != -1)
	{
		arguments->line_number += 1;
		tokenize_line();
		get_instructions();
		Run_instruct();
		FreeTokens();
	}
	CloseFile();
	freeArgs();
	return (0);
}
