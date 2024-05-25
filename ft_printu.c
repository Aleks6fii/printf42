#include "ft_printf.h"

//static int ft_numlen(unsigned int n);
//static char *ft_uitoa(unsigned int n);

// int ft_printu(unsigned int n)
// {
// 	int len;

// 	len = 0;
// 	if (n == 0)
// 		len += write(1, "0", 1);
// 	else
// 	{
		
// 	}
// }

// static int ft_numlen(unsigned int n)
// {
// 	int l;

// 	l = 0;
// 	while (n != 0)
// 	{
// 		n = n / 10;
// 		l++;
// 	}
// 	return (l);
// }

// static char *ft_uitoa(unsigned int n) 
// {
// 	char *num;
// 	int len;

// 	len = ft_numlen(n);
// 	num = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!num)
// 		return (NULL);
// 	num[len + 1] = '\0'; // num[len] ???
// 	while (n != 0)
// 	{
// 		num[len] = n % 10 + 48; // digit + 48 is this digit in ascii
// 		n = n / 10;
// 		len--;
// 	}
// 	return (num);
// }
