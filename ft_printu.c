#include "ft_printf.h"

static int	ft_unumlen(unsigned	int num);
static char	*ft_uitoa(unsigned int n);

int	ft_printu(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		len += ft_printstr(num);
		free(num);
	}
	return (len);
}

static int	ft_unumlen(unsigned	int n)
{
	int	l;

	l = 0;
	while (n != 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

static char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_unumlen(n);
	num = malloc(sizeof(char) * len + 1);
	if (!num)
		return (NULL);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}


// int ft_printu(unsigned int n)
// {
// 	int len;

// 	len = 0;
// 	if (n == 0)
// 		len += write(1, "0", 1);
// 	else
// 	{
// 		if (n < 10)
// 			len += ft_putchar(n + '0');
// 		else
// 		{
// 			ft_printu(n / 10);   // recursion
// 			len += ft_putchar(n % 10 + '0');
// 		}
// 	}
// 	return(len);
// }
