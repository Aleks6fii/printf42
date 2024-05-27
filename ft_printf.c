#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	int i;
	va_list args;
	int length;

	i = 0;
	length = 0;
	va_start(args, str);
	if (!str)
		return (0); // NULL?
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1])
		{
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

// #include <stdio.h>
// #include <limits.h>

// int main(void)
// {
// 	// ft_printf("hello %i very %s\n %", 134643567, "impressive :)");
// 	// ft_printf("unsigned int test: %u \n", 10); // 4294967295
// 	// printf("unsigned int printf: %u \n", 10);
// 	// ft_printf("hex test %X \n", 0xFFF00012);
// 	ft_printf(" %d \n", 0);
// 	// printf(" %d \n", LONG_MIN);
// 	// printf("%d \n", 0);
// 	return (0);
// }
