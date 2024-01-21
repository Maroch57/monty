#include "monty.h"
/**
* free_stack - function name frees a doubly linked list
* @head: function parameter head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
