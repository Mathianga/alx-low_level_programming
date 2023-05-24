#include "main.h"

/**
 * positive_or_negative - a prgram that tests if a number is positive,
 *  negative or equivalent to zero.
 *  @n: a parameter to be checked
 *  Return: always 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
