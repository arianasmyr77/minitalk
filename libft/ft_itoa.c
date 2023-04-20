/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:27:39 by arforouz          #+#    #+#             */
/*   Updated: 2023/02/13 15:22:56 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ret;
	long	nb;
	int		lon;

	nb = n;
	lon = count(nb);
	ret = malloc(sizeof(char) * (lon + 1));
	if (!ret)
		return (NULL);
	ret[lon] = '\0';
	lon--;
	if (nb == 0)
		ret[0] = '0';
	if (nb < 0)
	{
		ret[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		ret[lon] = '0' + (nb % 10);
		nb = nb / 10;
		lon--;
	}
	return (ret);
}
