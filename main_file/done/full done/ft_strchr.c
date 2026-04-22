/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:35:50 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/22 16:11:37 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int num)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == num)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == num)
		return ((char *)&str[i]);
	return ((void *)0);
}
