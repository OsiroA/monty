#include "monty.h"
/**
* main - Entry point
* Return: 0
*/

int main()
{
    int stack[1000];
    int top = -1;
    char opcode[10], argument[10];
    int lineNum = 1;

    while (scanf("%s", opcode) != EOF)
    {
        if (strcmp(opcode, "push") == 0)
        {
            if (scanf("%s", argument) != 1)
            {
                fprintf(stderr, "L%d: usage: push integer\n", lineNum);
                exit(EXIT_FAILURE);
            }
            pusher(stack, &top, argument, lineNum);
        }
        else if (strcmp(opcode, "pall") == 0) {
            printAll(stack, top);
        }
        else 
        {
            fprintf(stderr, "L%d: unknown opcode\n", lineNum);
            exit(EXIT_FAILURE);
        }

        lineNum++;
    }

    return 0;
}
