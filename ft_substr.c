/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:08:32 by ammirzae          #+#    #+#             */
/*   Updated: 2026/05/06 16:39:33 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	if (!str)
		return (NULL);
	i = ft_strlen(str);
	if (i <= start || len == 0)
		return (ft_strdup(""));
	if (len > (i - start))
		len = i - start;
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	i = 0;
	while (str[start] && i < len)
	{
		result[i] = str[start];
		i++;
		start++;
	}
	return (result);
}
