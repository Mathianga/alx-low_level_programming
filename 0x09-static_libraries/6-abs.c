#include "main.h"
#include <stdlib.h>

/**
 * _abs - a function that computes the absolute
 * value of an integer.
 * @m: function parameter
 * Return: always 0
 */

int _abs(int m)
{
	if (m < 0)
	{
		int abs_you;

		abs_you = m * -1;
		return (abs_you);
	}
	return (m);
}
