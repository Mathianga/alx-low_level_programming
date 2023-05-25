#include "main.h"

/**
 *_isdigit - a function that checks for a digit
 *@c: parameter to be computes
 *Return: alway 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
