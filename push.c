#include "header.h"
/**
 * pusher - This function pushes an element unto a stack
 * @stack: The stack array
 * @top: a pointer to the top of the stack
 * @argument: The argument to be pushed on the stack
 * @lineNum: The line number to re-ort errors with
 * Return: void
 */
void pusher(int *stack, int *top, const char *argument, int lineNum)
{
