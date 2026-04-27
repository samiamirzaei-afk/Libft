/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:53:36 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/27 17:00:39 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, &(*s), 1);
		s++;
	}
}
/*
#include <unistd.h>

int	main(void)
{
	char	*str001;
	char	str002[] = "hello world";

	str001 = NULL;
	ft_putstr_fd(str002, 1);
	ft_putstr_fd(str001, 1);
}
*/
