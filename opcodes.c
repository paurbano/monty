#include "monty.h"

/**
 * push - pushes a node to the top of stack
 * @stack: pointer to the head node pointer of stack
 * @line: the line number
 *
 * Return: Nothing.
 */

void push(stack_t **stack, unsigned int line)
{
	stack_t *node = NULL;


	if (stack == NULL)
	{
		fprintf(stderr, "L%d: Error stack not found\n", line);
		exit(EXIT_FAILURE);
	}
	/*printf("haciendo push:%d\n", line);*/

	node = malloc(sizeof(stack_t));

	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	node->n = (int)line;
	node->prev = NULL;
	node->next = *stack;
	if (*stack)
		(*stack)->prev = node;

	(*stack) = node;
}

/**
 * pall - prints the data of all nodes in stack
 * @stack: pointer to the head node pointer of stack
 * @line: the line number
 *
 * Return: Nothing.
 */
void pall(stack_t **stack, unsigned int line)
{
	stack_t *temp;
	(void)line;

	temp = *stack;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	/*printf("haciendo pall:%d\n", line);*/
}

/**
 * pint - prints the value at the top of stack
 * @stack: pointer to the head node pointer of stack
 * @line: the line number
 * Return: Nothing.
 */
void pint(stack_t **stack, unsigned int line)
{
/*printf("haciendo pint:%d\n", line);*/
	stack_t temp;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
	}

	while (temp)
	{
		if (temp->prev == NULL)
			break;
		temp = temp->prev;
	}
	printf("%d\n", temp->);
}

/**
 * pop - removes the top element of stack
 * @stack: pointer to the head node pointer of stack
 * @line: the line number
 * Return: Nothing.
 */
void pop(stack_t **stack, unsigned int line)
{
	if (stack == NULL)
	{
		exit(EXIT_FAILURE);
	}
	printf("haciendo pop:%d\n", line);
}

/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to the head node pointer of stack
 * @line: the line number
 * Return: Nothing.
 */
void swap(stack_t **stack, unsigned int line)
{
	if (stack == NULL)
	{
		exit(EXIT_FAILURE);
	}
	printf("haciendo swap:%d", line);
}
