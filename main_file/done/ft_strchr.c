/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:35:50 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/22 14:50:22 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int num)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == num)
			return ((char*)&str[i]);
		i++;
	}
	return ((void*)0);
}
