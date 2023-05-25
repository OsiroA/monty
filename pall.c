#include "header.h"
/**
 * printAll - this function lrints all the elements of the stack
 * @stack: the stack array
 * @top: the index of the top element in the stack
 * Return: void
 */
void printAll(const int *stack, int top)
{
    int tempTop = top;
    while (tempTop >= 0)
    {
        printf("%d\n", stack[tempTop]);
        tempTop--;
    }
}
