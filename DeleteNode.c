#include "monty.h"

/**
 * deleteNode - delete node at start
 * Description - Takes No Parameter
 */
void deleteNode(void)
{
    stack_t *tmp;
    tmp = arguments->head;
	arguments->head = tmp->next;
	free(tmp);
}