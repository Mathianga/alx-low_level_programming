#include "main.h"

/**
 * positive_or_negative - a prgram that tests if a number is positive,
 *  negative or equivalent to zero.
 *  @n: a parameter to be checked
 *  Return: always 0
 */

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
}
