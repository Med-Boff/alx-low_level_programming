#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - fonc that print strings
 * @separator: between strs
 * @n: num of strs
 * @...: var num
 */



void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
	char *current_str = va_arg(args, char *);

	if (current_str == NULL)
	{
		printf("(nil)");
	}
	else
	{
	printf("%s", current_str);
	}

	if (separator != NULL && i < n - 1)
	{
		printf("%s", separator);
	}
	}

	va_end(args);

	printf("\n");
}
