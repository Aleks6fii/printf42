#include "ft_printf.h"

int ft_printu(unsigned int n)
{
	int len;

	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		if (n < 10)
			len += ft_putchar(n + '0');
		else
		{
			ft_printu(n / 10);   // recursion
			len += ft_putchar(n % 10 + '0');
		}
	}
	return(len);
}
