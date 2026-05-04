/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:59:40 by ammirzae          #+#    #+#             */
/*   Updated: 2026/05/04 07:17:02 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				s_len;
	char			*result;

	if (!f || !s)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	result = malloc((s_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[s_len] = '\0';
	while (i < s_len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
