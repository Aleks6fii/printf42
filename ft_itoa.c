/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:39:34 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/27 18:12:00 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_length(long num);

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	long	numbr;

	numbr = n;
	len = num_length(numbr) - 1;
	res = (char *) malloc(len + 2);
	if (res == NULL)
		return (NULL);
	res[0] = '0';
	res[len + 1] = '\0';
	if (numbr < 0)
		numbr = -numbr;
	while (numbr != 0)
	{
		res[len--] = ((numbr % 10) + 48);
		numbr /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

static int	num_length(long num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		num = -num;
		count += 1;
	}
	if (num == 0)
		count += 1;
	while (num != 0)
	{
		num /= 10;
		count += 1;
	}
	return (count);
}

