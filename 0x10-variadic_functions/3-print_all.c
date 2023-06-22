#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments to be passed to the function
 * Return: always 0
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *string1 = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", string1, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", string1, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", string1, va_arg(list, double));
					break;
				case 's':
					string = va_arg(list, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", string1, string);
					break;
				default:
					i++;
					continue;
			}
			string1 = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
