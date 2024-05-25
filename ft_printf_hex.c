#include "ft_printf.h"

// int ft_hexlen(unsigned int num);
// int ft_puthex(unsigned int num, const char format);

// int ft_print_hex(unsigned int n, const char format)
// {
// 	if (n == 0)
// 		return (write(1, "0", 1));
// 	else
// 		ft_puthex(n, format);
// 	return (ft_hexlen(n));
// }

// int ft_hexlen(unsigned int num)
// {
// 	int l;

// 	l = 0;
// 	while (num != 0)
// 	{
// 		l++;
// 		num = num / 16;
// 	}
// 	return (l);
// }

// int ft_puthex(unsigned int num, const char format)
// {
// 	if (num >= 16)
// 	{
// 		ft_puthex(num / 16, format);
// 		ft_puthex(num % 16, format);
// 	}
// 	else
// 	{
// 		if (num <= 9)
// 			ft_putchar(num + '0'); // or ft_putchar_fd(..., 1) ???
// 		else
// 		{
// 			if (format == 'x')
// 				ft_putchar(num - 10 + 'a');
// 			if (format == 'X')
// 				ft
// 		}
// 	}

// }
