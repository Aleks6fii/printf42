/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:49:58 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/29 16:46:32 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_format(va_list args, const char format);
int		ft_print_ptr(unsigned long long pointer);
int		ft_printnbr(int n);
int		ft_printstr(char *str);
int		ft_printu(unsigned int n);
int		ft_putchar(int c);
int		ft_print_hex(unsigned int n, const char format);
void	ft_putstr(char *str);
char	*ft_itoa(int n);

#endif
