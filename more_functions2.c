#include "monty.h"
/**
 * fadd - responsible for adding the top two elements of the stack.
 * @head: the head of stack in subject.
 * @counter: counts number of lines.
 * Return: NULL.
*/
void fadd(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);

}





/**
  * fnop- null element.
  * @head: the head of stack in subject.
  * @counter: counts number of lines.
  * Return: NULL.
 */
void fnop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
