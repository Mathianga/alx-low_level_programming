#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that get ends of input and add together for size
 * @s1: string 1
 * @s2: string 2
 * Return: bot concatenated s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	conct = malloc(sizeof(char) * (len1 + len2 + 1));

	if (conct == NULL)
		return (NULL);
	len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		conct[len1] = s1[len1];
		len2++;
	}

	while (s2[len2] != '\0')
	{
		conct[len2] = s2[len2];
		len1++, len2++;
	}
	conct[len1] = '\0';
	return (conct);
}
