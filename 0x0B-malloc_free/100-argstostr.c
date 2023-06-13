#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: input parameter
 * @av: a double pointer array
 * Return: always 0
 */

char *argstostr(int ac, char **av)
{
	int i, n, j = 0, l = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l = l + ac;

	ptr = malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			ptr[j] = av[i][n];
			j++;
		}
		if (ptr[j] == '\0')
		{
			ptr[j++] = '\n';
		}
	}
	return (ptr);
}
