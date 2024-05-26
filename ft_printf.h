#include <unistd.h>
#include <stdarg.h>
#include <stdint.h> // for uintptr_t type - allowed ???
// #include "libft/libft.h"

int		ft_format(va_list args, const char format);
int		ft_print_ptr(unsigned long long pointer);
// int		ft_printnbr(int	n);
int		ft_printstr(char *str);
int		ft_printu(unsigned int	n);
int		ft_putchar(int	c);
int		ft_print_hex(unsigned int n, const char format);
void	ft_putstr(char *str);
	