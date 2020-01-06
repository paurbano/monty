#include "monty.h"
/**
 * add - adds the top two elements together
 * @stack: pointer to the head node pointer of stack
 * @line: the line number
 * Return: Nothing.
 */
void add(stack_t **stack, unsigned int line)
{
	if (stack == NULL)
	{
		exit(EXIT_FAILURE);
	}
	printf("haciendo add:%d\n", line);
}

/**
 * nop - does nothing
 * @stack: pointer to the head node pointer of stack
 * @line: the line number
 * Return: Nothing.
 */
void nop(stack_t **stack, unsigned int line)
{
	(void)stack;
	(void)line;
}
