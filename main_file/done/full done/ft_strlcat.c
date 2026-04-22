/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:31:46 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/22 14:16:38 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_i;
	size_t	dest_i;
	size_t	result;

	src_i = 0;
	dest_i = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	while (src[src_i] != '\0')
		src_i++;
	result = src_i + dest_i;
	if (size <= dest_i)
		return (src_i + size);
	src_i = 0;
	while (src[src_i] != '\0' && dest_i < size - 1)
	{
		dest[dest_i] = src[src_i];
		dest_i++;
		src_i++;
	}
	dest[dest_i] = '\0';
	return (result);
}
