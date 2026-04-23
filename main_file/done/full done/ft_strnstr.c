/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:46:21 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/23 17:44:26 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hey, const char *needle, size_t length)
{
	size_t	i;
	size_t	k;

	if (needle[0] == '\0')
		return ((char *)hey);
	if (!hey || length < 1)
		return ((void *)0);
	i = 0;
	k = 0;
	while (hey[i] && i < length)
	{
		k = 0;
		while (hey[i] == needle[k] && hey[i] != '\0')
		{
			i++;
			k++;
		}
		if (needle[k] == '\0')
			return ((char *)&hey[i - k]);
		i++;
	}
	return ((void *)0);
}
