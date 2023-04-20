/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:45:27 by arforouz          #+#    #+#             */
/*   Updated: 2023/02/13 15:06:34 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr(unsigned int n)
{
	static int	count;

	count = 0;
	if (n > 9)
	{
		ft_putunbr(n / 10);
		ft_putchar((n % 10) + '0');
		count++;
	}
	else
	{
		ft_putchar(n + '0');
		count = 1;
	}
	return (count);
}
