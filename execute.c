#include "monty.h"
/**
* execute - responsible for executing the opcode.
* @stack: the head linked list in subject.
* @counter: responsible for counting a line in subject.
* @file: a monty file pointer.
* @content: the content of a line in subject.
* Return: NULL.
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", fpush},
			        {"pall", fpall}, 
				{"pint", fpint},
				{"pop", fpop},
				{"swap", fswap},
				{"add", fadd},
				{"nop", fnop},
				{"stack", fstack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}