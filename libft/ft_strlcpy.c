/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:55:04 by arforouz          #+#    #+#             */
/*   Updated: 2023/02/13 15:08:04 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i] != '\0')
		i++;
	j = 0;
	if (dstsize > 0)
	{
		while (src[j] && j < dstsize - 1)
		{
			dst[j] = (char) src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}
