#include "monty.h"

/**
 * tokenize_line - tokenize each line of the file
 * Description - takes no parameters
 */
void tokenize_line(void)
{
	int i = 0;
	char *delims = " \n", *token = NULL, *lineCpy = NULL;

	lineCpy = malloc(sizeof(char) * (strlen(arguments->line) + 1));
	strcpy(lineCpy, arguments->line);
	arguments->Num_tok = 0;
	token = strtok(lineCpy, delims);
	while (token)
	{
		arguments->Num_tok += 1;
		token = strtok(NULL, delims);
	}
	arguments->tokens = malloc(sizeof(char *) * (arguments->Num_tok + 1));
	strcpy(lineCpy, arguments->line);
	token = strtok(lineCpy, delims);
	while (token)
	{
		arguments->tokens[i] = malloc(sizeof(char) * (strlen(token) + 1));
		if (arguments->tokens[i] == NULL)
			malloc_failed();
		strcpy(arguments->tokens[i], token);
		token = strtok(NULL, delims);
		i++;
	}
	arguments->tokens[i] = NULL;
	free(lineCpy);
}

/**
 * FreeTokens - free tokens each line of the file
 * Description - takes no parameters
 */
void FreeTokens(void)
{
	int i = 0;

	if (arguments->tokens == NULL)
		return;
	while (arguments->tokens[i])
	{
		free(arguments->tokens[i]);
		i++;
	}
	free(arguments->tokens);
	arguments->tokens = NULL;
}
