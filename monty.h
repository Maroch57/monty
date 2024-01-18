#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/* Structures */

/**
 * struct stack_s - stack representation of a doubly linked list.
 * @n: a node value integer.
 * @prev: it points to the previous element of the stack/queue.
 * @next: it points to the next element of the stack/queue.
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - arguments, variables etc in subject.
 * @arg: the value in subject.
 * @file: a ptr to a monty file in subject.
 * @content: the line content in subject.
 */
typedef struct bus_s
{
	char *arg;
	int lifi;
	FILE *file;
	char *content;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - function of opcode and opcode itself.
 * @opcode: opcode in subject.
 * @f: the opcode function handler.
 *
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void fpush(stack_t **head, unsigned int number);
void fpall(stack_t **head, unsigned int number);
void fpint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void fpop(stack_t **head, unsigned int counter);
void fswap(stack_t **head, unsigned int counter);
void fadd(stack_t **head, unsigned int counter);
void fnop(stack_t **head, unsigned int counter);
void fstack(stack_t **head, unsigned int counter);

void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
#endif
