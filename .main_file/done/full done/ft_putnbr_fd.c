/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:53:11 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/29 14:53:31 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_max_min_check(int nb, int fd)
{
	if (nb == 2147483647)
	{
		write(fd, "2147483647", 10);
		return (1);
	}
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (1);
	}
	return (0);
}

void	ft_putnbr_fd(int nb, int fd)
{
	int		i;
	char	itoa[12];

	if (ft_max_min_check(nb, fd) == 1)
		return ;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	itoa[0] = '\0';
	i = 1;
	while (nb > 9)
	{
		itoa[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	itoa[i] = nb + '0';
	while (itoa[i] != '\0')
	{
		write(fd, &itoa[i], 1);
		i--;
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
		ft_putnbr_fd(-1244, 1); write(1, "\n", 1);
		ft_putnbr_fd(1294871, 1); write(1, "\n", 1);
		ft_putnbr_fd(-2147483644, 1); write(1, "\n", 1);
		ft_putnbr_fd(-2147483645, 1); write(1, "\n", 1);
		ft_putnbr_fd(-2147483646, 1); write(1, "\n", 1);
		ft_putnbr_fd(-2147483647, 1); write(1, "\n", 1);
		ft_putnbr_fd(-2147483648, 1); write(1, "\n", 1);
		ft_putnbr_fd(-2147483649, 1); write(1, "\n", 1);
		ft_putnbr_fd(2147483647, 1); write(1, "\n", 1);
		ft_putnbr_fd(2147483646, 1); write(1, "\n", 1);
		ft_putnbr_fd(2147483645, 1); write(1, "\n", 1);
		ft_putnbr_fd(2147483644, 1); write(1, "\n", 1);
}*/
