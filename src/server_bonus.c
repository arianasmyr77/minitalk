/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:29:03 by arforouz          #+#    #+#             */
/*   Updated: 2023/02/13 16:47:52 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "../libft/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

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
	ft_printf("ip is %d\n", pid);
	signal(SIGUSR1, recieve_message);
	signal(SIGUSR2, recieve_message);
	while (1)
	{
		pause();
	}
	return (EXIT_SUCCESS);
}
