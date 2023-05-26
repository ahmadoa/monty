#ifndef __MONTY_H__
#define __MONTY_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
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
void subOP(stack_t **stack, unsigned int line_number);
void divOP(stack_t **stack, unsigned int line_number);
void mulOP(stack_t **stack, unsigned int line_number);
void modOP(stack_t **stack, unsigned int line_number);
void pcharOP(stack_t **stack, unsigned int line_number);

/* error handlers */
void fileErr(void);
void useErr(void);
void mallocErr(stack_t **stack);
void opcodeErr(stack_t **stack, unsigned int numL);
void addErr(stack_t **stack, unsigned int numL);
void pushErr(stack_t **stack, unsigned int numL);
void pintErr(stack_t **stack, unsigned int numL);
void swapErr(stack_t **stack, unsigned int numL);
void popErr(stack_t **stack, unsigned int numL);
void subErr(stack_t **stack, unsigned int numL);
void divErr(stack_t **stack, unsigned int numL);
void zeroErr(stack_t **stack, unsigned int numL);
void mulErr(stack_t **stack, unsigned int numL);
void modErr(stack_t **stack, unsigned int numL);
void charErr(stack_t **stack, unsigned int numL);
void pcharErr(stack_t **stack, unsigned int numL);


/* shared vars */
/**
 * struct valStack - shared variables in the program
 * @n: value
 * @file: file to read
 * @code: tokenized command
 * @mode: 0 for stack, 1 for queue
 * Description: contains info about everything in program
 */
struct valStack
{
	char *n;
	char *code;
	int mode;
	char *file;
} valStack;

#endif
