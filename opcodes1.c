#include "monty.h"
/**
 * add - adds the top two elements together
 * @stack: pointer to the head node pointer of stack
 * @line: the line number
 * Return: Nothing.
 */
void add(stack_t **stack, unsigned int line)
{
	/*printf("haciendo add:%d\n", line);*/
	stack_t *temp;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	(*stack)->next->n += (*stack)->n;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
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

/**
 * sub - subtracts top element from the second top element of the stack.
 * @stack: pointer to the head node pointer of stack
 * @line: the line number
 * Return: Nothing.
 */
void sub(stack_t **stack, unsigned int line)
{
	stack_t *temp;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	(*stack)->next->n -= (*stack)->n;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}

/**
 * div - divide top element from the second top element of the stack.
 * @stack: pointer to the head node pointer of stack
 * @line: the line number
 * Return: Nothing.
 */
void div(stack_t **stack, unsigned int line)
{
	stack_t *temp;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	(*stack)->next->n /= (*stack)->n;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}

/**
 * mul - multiplies second top element with the top element of the stack.
 * @stack: pointer to the head node pointer of stack
 * @line: the line number
 * Return: Nothing.
 */
void mul(stack_t **stack, unsigned int line)
{
	stack_t *temp;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	(*stack)->next->n *= (*stack)->n;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}
