#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothinge
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i;

	i = 0;
	va_start(args, format);
	if (formt)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					format[i + 1] == '\0' ? printf("%c", va_arg(args, int))
					: printf("%c, ", va_arg(args, int));
					break;
				case 'i':
					format[i + 1] == '\0' ? printf("%d",     va_arg(args, int))
					: printf("%d, ", va_arg(args, int));
					break;
				case 'f':
					format[i + 1] == '\0' ? printf("%f",     va_arg(args, double))
					: printf("%f, ", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					format[i + 1] == '\0' ? printf("%s", str) :
					printf("%s, ", str);
					break;
				default:
					break;
			}
		i++;
		}
	}
	printf("\n");
	va_end(args);
}
