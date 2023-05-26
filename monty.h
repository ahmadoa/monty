#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/* op functions handler */
void (*op_functions(char *str))(stack_t **stack, unsigned int numL);

/* free stack */
void freeStack(stack_t *stack);

/* op functions*/
void pushOP(stack_t **stack, unsigned int line_number);
void pallOP(stack_t **stack, unsigned int line_number);
void pintOP(stack_t **stack, unsigned int line_number);
void popOP(stack_t **stack, unsigned int line_number);
void swapOP(stack_t **stack, unsigned int line_number);
void addOP(stack_t **stack, unsigned int line_number);
void nopOP(stack_t **stack, unsigned int line_number);

/* error handlers */
void fileErr();
void useErr();
void opcodeErr(stack_t **stack, unsigned int numL);
void addErr(stack_t **stack, unsigned int numL);
void pushErr(stack_t **stack, unsigned int numL);
void pintErr(stack_t **stack, unsigned int numL);
void swapErr(stack_t **stack, unsigned int numL);
void popErr(stack_t **stack, unsigned int numL);


/* shared vars */
struct valStack
{
	char *n;
	char *code;
	int mode;
	char *file;
} valStack;

#endif
