/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:48:47 by arforouz          #+#    #+#             */
/*   Updated: 2023/02/13 13:51:46 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	is_negative;
	int	ret;

	ret = 0;
	is_negative = 1;
	while (*str == ' ' || (*str <= 13 && *str >= 9))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_negative = -1;
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		ret = (ret * 10) + (*str - '0');
		str++;
	}
	return (ret * is_negative);
}

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
