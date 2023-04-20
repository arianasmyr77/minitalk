/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:13:02 by arforouz          #+#    #+#             */
/*   Updated: 2023/02/13 15:06:26 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptr(unsigned long ptr)
{
	static int		i;

	i = 2;
	if (ptr >= 16)
	{
		ft_putptr(ptr / 16);
		ft_putchar("0123456789abcdef"[ptr % 16]);
		i++;
	}
	else
	{
		ft_putchar("0123456789abcdef"[ptr % 16]);
		i++;
	}
	return (i);
}
