/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:28:44 by arforouz          #+#    #+#             */
/*   Updated: 2023/02/13 16:47:29 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "../libft/libft.h"
#include <stdlib.h>

void	send_message(char c, int pid)
{
	int	i;

	i = 7;
	while (i != -1)
	{
		if (c >> i & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(250);
		i--;
	}
}

void	send_string(char *str, int pid)
{
	int	i;

	i = 0;
	while (str[i])
	{
		send_message(str[i], pid);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	pid = 0;
	if (argc != 3)
		return (1);
	pid = ft_atoi(argv[1]);
	send_string(argv[2], pid);
	return (0);
}
