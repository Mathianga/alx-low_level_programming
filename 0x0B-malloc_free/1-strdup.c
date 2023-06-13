#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that duplicates to new memory space location
 * @str: pointer string
 * Return: always 0
 */

char *_strdup(char *str)
{
	char *str1;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	str1 = malloc(sizeof(char) * (i + 1));

	if (str1 == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		str1[j] = str[j];

	return (str1);
}
