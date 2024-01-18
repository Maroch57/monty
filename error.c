#include "monty.h"

/**
 * error_usage - it prints error message after an incorrect usage.
 * @line_number: number of line number where an error occurs.
 */
void error_usage(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: monty file\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * error_file_open - error message is printed after file open failure.
 * @file: the file name that failed/refused to open.
 */
void error_file_open(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
	exit(EXIT_FAILURE);
}

/**
 * error_unknown_instruction - an error message is printed after an unknown instruction.
 * @line_number: number of a line where an error occurs.
 * @opcode: an opcode that is not known.
 */

void error_unknown_instruction(unsigned int line_number, char *opcode)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}

/**
 * error_malloc_failed - it prints malloc failure error message.
 */

void error_malloc_failed(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * error_stack_empty - ensures error message for empty stack is printed.
 * @line_number: number in a line where the error occurs.
 * @op: operation name that requires a stack not to be empty.
 */
void error_stack_empty(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack empty\n", line_number, op);
	exit(EXIT_FAILURE);
}

/**
 * error_stack_short - ensures error message for a short stack is printed.
 * @line_number: line number where the error occurs.
 * @op: operation name that requires a stack to be long.
 */
void error_stack_short(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	exit(EXIT_FAILURE);
}

