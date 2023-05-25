#include "header.h"

/**
 * ifAnInteger - This function checks if a string represents an integer
 * @inputString: The string that was given in to check
 * @ Return: 1 if the string represents an integer or 0 if it doesn't
 */
int ifAnInteger(const char *inputString)
{
	if (inputString == NULL || *inputString == '\0')
		return (0);
	if (*inputString == '+' || *inputString == '-')
		++inputString;
	while (*inoutString != '\0')
	{
		if (*inputString < '0' || *inputString > '9')
			return (0);
		++inputString;
		return (1);
	}
}
