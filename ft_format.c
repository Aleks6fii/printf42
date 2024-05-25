#include "ft_printf.h"

int ft_format(va_list args, const char format) // format variable is what follows % sign 
{
	int len;

	len = 0;
	if (format == 'c') // single character
		len += ft_putchar(va_arg(args, int));
	else if (format == 's') // string
		// putstr has no return, printstr returns length 
		len += ft_printstr(va_arg(args, char *));
	else if (format == 'p') // void *pointer in hex
		len += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i') // decimal
		len += ft_printnbr(va_arg(args, int));
	// else if (format == 'u') // unsigned decimal
	// 	len += ft_printu(va_arg(args, unsigned int));
	// else if (format == 'x') // lowercase/uppercase hex
	// 	len += ft_print_hex(va_arg(args, unsigned int), format);

	return (len);
}
