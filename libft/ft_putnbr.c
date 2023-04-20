/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:10:59 by arforouz          #+#    #+#             */
/*   Updated: 2023/02/13 15:07:38 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	int	nbr;

	nbr = 0;
	if (n >= -2147483648 || n <= 2147483647)
	{
		if (n == -2147483648)
		{
			nbr += ft_putchar('-');
			nbr += ft_putchar('2');
			nbr += ft_putnbr(147483648);
		}
		else if (n < 0)
		{
			nbr += ft_putchar('-');
			nbr += ft_putnbr(-n);
		}
		else if (n > 9)
		{
			nbr += ft_putnbr((n / 10));
			nbr += ft_putnbr((n % 10));
		}
		else
			nbr += ft_putchar((n + '0'));
	}
	return (nbr);
}
