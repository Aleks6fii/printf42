/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:52:45 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/30 17:59:41 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printu(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		if (n < 10)
			len += ft_putchar(n + '0');
		else
		{
			len += ft_printu(n / 10);
			len += ft_putchar(n % 10 + '0');
		}
	}
	return (len);
}
