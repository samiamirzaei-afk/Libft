/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:12:49 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/22 16:39:25 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int num)
{
	int	str_length;

	str_length = (ft_strlen(str));
	while (str_length >= 0)
	{
		if (str[str_length] == (unsigned char)num)
			return ((char *)&str[str_length]);
		str_length--;
	}
	return ((void *)0);
}
