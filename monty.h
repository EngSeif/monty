#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct argumens_f
{
FILE *stream;
char *line;
unsigned int line_number;
char **tokens;
int Num_tok;
instruction_t *instructs;
stack_t *head;
int stack_len;
int stack;
} argumens_f;

extern argumens_f *arguments;

/* --------- Error Messages Functions --------- */

void malloc_failed(void);
void IsWrongInputArgs(int argc);
void FailedToOpen(char *filename);
void invalid_instructs(void);

/* --------- FileOperations Functions --------- */

void GetFile(char *filename);
void init_args(void);
void CloseFile(void);

/* --------- Instructions Functions --------- */
void get_instructions(void);
void Run_instruct(void);
void freeArgs(void);
void freeHead(void);
void freeStack(stack_t *head);
void freeAll(void);


/* --------- Tokens Functions --------- */
void tokenize_line(void);
void FreeTokens(void);


ssize_t getline(char **lineptr, size_t *n, FILE *stream);
int IsNumber(char *str);
void deleteNode(void);

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void div(stack_t **stack, unsigned int line_number);

#endif
