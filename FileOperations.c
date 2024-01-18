#include "monty.h"

/**
 * GetFile - Receive the file name
 * @filename: name of the file to be opened
 */
void GetFile(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		FailedToOpen(filename);

	arguments->stream = fopen(filename, "r");

	if (arguments->stream == NULL)
	{
		close(fd);
		FailedToOpen(filename);
	}
}

/**
 * init_args - intiate arguments before using
 * Description - Takes No Parameters
 */

void init_args(void)
{
	arguments = malloc(sizeof(argumens_f));
	if (arguments == NULL)
		malloc_failed();

	arguments->instructs = malloc(sizeof(instruction_t));
	if (arguments->instructs == NULL)
		malloc_failed();

	arguments->stream = NULL;
	arguments->head = NULL;
	arguments->line = NULL;
	arguments->Num_tok = 0;
	arguments->line_number = 0;
	arguments->stack_len = 0;
	arguments->stack = 1;

}

/**
 * CloseFile - Close file after using
 * Description - Takes No Parameters
 */

void CloseFile(void)
{
	if (arguments->stream == NULL)
		return;
	fclose(arguments->stream);
	arguments->stream = NULL;
}
