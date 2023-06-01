#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @n: data inputs
 * Return: n
 */

char *leet(char *n)
{
	int i, j;
	char name1[] = "aAeEoOtTlL", name2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == name1[j])
			{
				n[i] = name2[j];
			}
		}
	}
	return (n);
}
