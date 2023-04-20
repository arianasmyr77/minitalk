/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:13:19 by arforouz          #+#    #+#             */
/*   Updated: 2023/02/13 15:07:28 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

int	ft_converter(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (c == 'p')
	{
		write(1, "0x", 2);
		return (ft_putptr(va_arg(args, unsigned long)));
	}	
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'x')
		return (ft_puthex_lower(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_puthex_upper(va_arg(args, unsigned int)));
	else if (c == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	else if (c == '%')
		return (write(1, "%%", 1));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	args;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len += ft_converter(args, *str);
		}
		else
		{
			write(1, str, 1);
			len++;
		}
		str++;
	}
	va_end(args);
	return (len);
}
