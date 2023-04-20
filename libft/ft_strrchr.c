/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:07:34 by arforouz          #+#    #+#             */
/*   Updated: 2023/02/13 15:09:30 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		len;

	len = ft_strlen((char *)str) + 1;
	while (len--)
	{
		if (str[len] == (char) c)
			return ((char *)&str[len]);
	}
	return (0);
}
