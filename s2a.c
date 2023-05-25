#include "monty.h"

/**
 * printChar - Prints the ASCII value.
 * @stack: Pointer to a pointer pointing to the top node of the stack.
 * @lineNumber: Integer representing the line number of the opcode.
 */
void printChar(stack_t **stack, unsigned int lineNumber)
{
    int ascii;

    if (stack == NULL || *stack == NULL)
        stringErr(11, lineNumber);

    ascii = (*stack)->n;
    if (ascii < 0 || ascii > 127)
        stringErr(10, lineNumber);

    printf("%c\n", ascii);
}

/**
 * printStr - Prints a string.
 * @stack: Pointer to a pointer pointing to the top node of the stack.
 * @lineNumber: Integer representing the line number of the opcode.
 */
void printStr(stack_t **stack, unsigned int lineNumber)
{
    int ascii;
    stack_t *tmp;

    if (stack == NULL || *stack == NULL)
    {
        printf("\n");
        return;
    }

    tmp = *stack;
    while (tmp != NULL)
    {
        ascii = tmp->n;
        if (ascii <= 0 || ascii > 127)
            break;

        printf("%c", ascii);
        tmp = tmp->next;
    }

    printf("\n");
}
