#include "monty.h"

/**
 * main - interpreter for monty files
 * @argc: number of args passed
 * @argv: an array of the args passed
 * Return: always 0
 */
int main(int argc, char **argv)
{
	FILE *file_op;
	char *bufL, op_buf[20], bufVAL[20];
	ssize_t readBs = 0, tokens = 0;
	size_t bufLen = 0;
	unsigned int numL = 0;
	stack_t *stack = NULL;

	if (argc != 2 || !argv[1])
		useErr();
	valStack.mode = 0;
	valStack.file = argv[1];
	file_op = fopen(valStack.file, "r");
	if (!file_op)
		fileErr();

	while ((readBs = getline(&bufL, &bufLen, file_op)) != -1)
	{
		numL++;
		tokens = sscanf(bufL, "%s %s", op_buf, bufVAL);
		if (tokens > 2)
		{
			free(bufL);
			useErr();
		}
		free(bufL);
		bufL = NULL;
		valStack.code = bufVAL;
		valStack.n = bufVAL;
		if (tokens > 0 && valStack.code[0] != '#')
			op_functions(valStack.code)(&stack, numL);
		memset(op_buf, '\0', sizeof(op_buf));
		memset(bufVAL, '\0', sizeof(bufVAL));
	}
	free(bufL);
	freeStack(stack);
	fclose(file_op);
	return (0);
}
