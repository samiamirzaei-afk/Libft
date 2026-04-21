/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:43:18 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/21 12:58:50 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	unsigned char	ptr_copy[512];

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	i = 0;
	while (i < length)
	{
		ptr_dest[i] = *ptr_copy;
		i++;
		*ptr_copy += 1;
	}
	*ptr_copy -= i + 1;
	i = 0;
	while (i < length)
	{
		ptr_dest = ptr_copy;
		i++;
		*ptr_copy += 1;
		ptr_dest += 1;
	}
	return (dest);
}
