#include "monty.h"

/**
 * error_malloc_failed - it prints malloc failure error message.
 *
 */
void error_malloc_failed(void)
{
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
}

/**
 * error_stack_empty - it prints empty stack error message.
 * @line_number: line number where error occurs.
 * @op: operation that requires a stack not to be empty.
 *
 */

void error_stack_empty(unsigned int line_number, char *op)
{
        fprintf(stderr, "L%u: can't %s, stack empty\n", line_number, op);
        exit(EXIT_FAILURE);
}

/**
 * error_stack_short - it print short stack error message.
 * @line_number: line number where error occurs.
 * @op: operation name that requires a stack to be long.
 */

void error_stack_short(unsigned int line_number, char *op)
{
        fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
        exit(EXIT_FAILURE);
}
