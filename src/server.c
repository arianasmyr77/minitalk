/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:33:03 by arforouz          #+#    #+#             */
/*   Updated: 2023/02/13 15:46:50 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	recieve_message(int signum)
{
	static int		c;
	static int		len;

	c = c << 1;
	len++;
	if (signum == SIGUSR1)
		c = c + 1;
	if (len == 8)
	{
		len = 0;
		ft_putchar_fd(c, 1);
		c = 0;
	}
}

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	ft_printf("IP of server is %d\n", pid);
	signal(SIGUSR1, recieve_message);
	signal(SIGUSR2, recieve_message);
	while (1)
	{
		pause();
	}
	return (EXIT_SUCCESS);
}
