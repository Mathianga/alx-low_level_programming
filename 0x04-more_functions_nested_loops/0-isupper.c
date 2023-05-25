#include "main.h"

/**
 *_isupper -  a function that checks for uppercase character.
 *@c: parameter to be checked
 *Return: always 0
 */

int _isupper(int c)
{
	while (c >= 'A' && c <= 'Z')
	{
		return (1);
		c++;
	}
		return (0);
}
