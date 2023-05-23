#include "main.h"
/**
*_isalpha - a function that checks for alphabetic character.
*@c: parameter to be checked
*Return: 1 or 0
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 90 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
