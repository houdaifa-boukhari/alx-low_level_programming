#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;
	char *str;

	va_start(args, n);
	i = 0;
	while (i < (int)n)
	{
		str = va_arg(args, char *);
		if (!str)
			str = "(nil)"; 
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
		i++;
	}
	printf("\n");
	va_end(args);
}
