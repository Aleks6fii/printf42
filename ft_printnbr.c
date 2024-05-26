#include "ft_printf.h"

static int ft_numlen(int n);
static void ft_putnbr(int nb);

int ft_printnbr(int n)
{
	int len;

	// rewrte this without mem alloc 
	// take length of a number and print digit by digit 
	len = ft_numlen(n);
	ft_putnbr(n);
	return (len);
}

static int ft_numlen(int n)
{
	int l;

	l = 0;
	if (n < 0)
	{
		l += 1;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

static void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}
