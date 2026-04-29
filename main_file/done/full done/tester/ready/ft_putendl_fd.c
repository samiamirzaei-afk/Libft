/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:19:24 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/29 15:20:43 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, '\n', 1);
}
/*
int	main(void)
{
	char	*str001;
	char	str002[] = "hello world";

	str001 = NULL;
	ft_putstr_fd(str002, 1);
	ft_putstr_fd(str001, 1);
}
*/
