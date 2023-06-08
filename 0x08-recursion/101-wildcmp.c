#include "main.h"
#include <stdio.h>

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - a function taht checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 & 0 for true and false respectively
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: a string of which the length is to be calculated
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - a function that checks the characters recursively for palindrome
 * @s: string to to be check
 * @i: input parameter
 * @len: length of the string
 * Return: 1 & 0 for true and false respectively
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	if (i >= len)
		return (1);

	return (check_pal(s, i + 1, len - 1));
}
