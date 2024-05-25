#include "ft_printf.h"

static int ft_pointer_len(uintptr_t ptr);
static void ft_putptr(uintptr_t ptr);

int ft_print_ptr(unsigned long long pointer)
{
	int len;

	len = 0;
	len += write(1, "0x", 2); // print beginning of hex format 
	if (pointer == 0)
		len += write(1, "0", 1);
	else 
	{
		len += ft_pointer_len(pointer);
	}
	return (len);
}

static int ft_pointer_len(uintptr_t ptr)
{
	int l;

	l = 0;
	while (ptr != 0)
	{
		l++;
		ptr = ptr / 16;
	}
	return (l);
}

static void ft_putptr(uintptr_t ptr)
{
	if (ptr >= 16)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else 
	{
		if (ptr <= 9)
			ft_putchar(ptr + '0'); // or ft_putchar_fd() ???
		else
			ft_putchar(ptr - 10 + 'a'); // this is to convert to letters in hex format 
	}
}
