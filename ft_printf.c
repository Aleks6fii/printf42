#include "ft_printf.h"
#include <stdio.h>

int ft_printf(const char *str, ...)
{
	int i;
	va_list args;
	int length; // do we need to return length of what was printed?

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (i > 20)
			printf("\nstr: %s\n i: %i str[i]: %c", str, i, str[i]);
		if (str[i] == '%' && str[i + 1])
		{
			//printf("\n -- %s\n", str);
			length += ft_format(args, str[i + 1]);
			i++;
		}
		else 
			length += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}

int main(void)
{
	// ft_printf("hello %i very %s\n %", 134643567, "impressive :)");
	ft_printf("unsigned int %u \n", 0/*4294967295*/);
	return (0);
}
