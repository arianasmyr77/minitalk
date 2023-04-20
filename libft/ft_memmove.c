/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:00:49 by arforouz          #+#    #+#             */
/*   Updated: 2023/02/13 15:07:20 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
		return (dest);
	if (dest <= src)
	{
		ft_memcpy(dest, src, n);
		return (dest);
	}
	while (n--)
	{
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	return (dest);
}
