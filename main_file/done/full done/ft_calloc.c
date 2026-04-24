/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:40:33 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/24 19:08:09 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checks(size_t nmemb, size_t size)
{
	size_t	result;
	size_t	temp;

	result = -1;
	temp = result / size;
	if (nmemb > temp)
		return (0);
	return (1);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (ft_checks(nmemb, size) == 0)
		return (NULL);
	if (nmemb <= 0 || size <= 0)
		return (malloc(nmemb * size));
	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);
	result = ft_memset(result, 0, (nmemb * size));
	return (result);
}
