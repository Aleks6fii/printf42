#include "ft_printf.h"

int ft_printnbr(int n)
{
	int len;
	char *num;

	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}

// static int ft_numlen(int n)
// {
// 	int l;

// 	l = 0;
// 	if (n < 0)
// 	{
// 		l += 1;
// 		n = -n;
// 	}
// 	while (n != 0)
// 	{
// 		n = n / 10;
// 		l++;
// 	}
// 	return (l);
// }

// static void ft_putnbr(int nb)
// {
// 	if (nb == -2147483648)
// 	{
// 		write(1, "-2147483648", 11);
// 		return;
// 	}
// 	if (nb < 0)
// 	{
// 		write(1, "-", 1);
// 		nb = -nb;
// 	}
// 	if (nb < 10)
// 	{
// 		ft_putchar(nb + '0');
// 	}
// 	else
// 	{
// 		ft_putnbr(nb / 10);
// 		ft_putchar(nb % 10 + '0');
// 	}
// }
