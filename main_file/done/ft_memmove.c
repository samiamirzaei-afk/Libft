/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:43:18 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/21 16:35:34 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

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
		ptr_copy[i] = ptr_src[0];
		i++;
		ptr_src += 1;
	}
	i = 0;

//	printf("***ptr_copy:'%s' ***\n", ptr_copy);

	while (i < length)
	{
		ptr_dest[0] = ptr_copy[i];
		i++;
		ptr_dest += 1;
	}
	return (dest);
}
