#include "ft_printf.h"
#include <stdio.h>

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
		if (i > 20)
			printf("\nstr: %s\n i: %i str[i]: %c", str, i, str[i]);
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

// int main(void)
// {
// 	char *ptr;
// 	ptr = "abc";
// 	// ft_printf("hello %i very %s\n %", 134643567, "impressive :)");
// 	ft_printf("unsigned int %u \n", 0); // 4294967295
// 	ft_printf("percent test %% \n");
// 	ft_printf("pointer test %p \n", ptr);
// 	ft_printf("hex test %X \n", 0xFFF00012);
// 	return (0);
// }
