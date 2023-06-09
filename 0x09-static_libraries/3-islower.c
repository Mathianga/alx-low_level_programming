#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * @c: paranmeter to be checked
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
