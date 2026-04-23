/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:34:50 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/23 12:02:25 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int number, size_t size)
{
	unsigned char	*ptr_str;
	size_t			i;

	ptr_str = (unsigned char *)str;
	i = 0;
	if (ptr_str[i] == (unsigned char)number)
		return (&ptr_str[i]);
	while (i < size)
	{
		if (ptr_str[i] == (unsigned char)number)
			return (&ptr_str[i]);
		i++;
	}
	return ((void *)0);
}
