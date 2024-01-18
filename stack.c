#include "monty.h"
/**
 * fstack - ensures the top is printed.
 * @head: the head of stack.
 * @counter: counts number of line.
 * Return: nothing at all.
*/
void fstack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}


#include "monty.h"
/**
* free_stack - it ensures a doubly linked list is freed.
* @head: it is the head of the stack in subject.
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
