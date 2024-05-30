/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:52:20 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/29 16:46:14 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_pointer_len(unsigned long long ptr);
static void	ft_putptr(unsigned long long ptr);

int	ft_print_ptr(unsigned long long pointer)
{
	int	len;

	len = 0;
	if (pointer == 0)
		len += write(1, "(nil)", 5);
	else 
	{
		len += write(1, "0x", 2);
		len += ft_pointer_len(pointer);
		ft_putptr(pointer);
	}
	return (len);
}

static int	ft_pointer_len(unsigned long long ptr)
{
	int	l;

	l = 0;
	while (ptr != 0)
	{
		l++;
		ptr = ptr / 16;
	}
	return (l);
}

static void	ft_putptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else 
	{
		if (ptr <= 9)
			ft_putchar(ptr + '0');
		else
			ft_putchar(ptr - 10 + 'a');
	}
}
