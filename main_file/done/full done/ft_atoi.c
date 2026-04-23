/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:48:47 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/23 18:05:30 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_negative_add(char *str, int *i)
{
	int	negative;

	negative = 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			negative *= -1;
		*i += 1;
	}
	return (negative);
}

static int	ft_isspace(char letter)
{
	if ((letter >= '\t' && letter <= '\r') || letter == ' ')
		return (1);
	return (-1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	result_l;
	int	result;

	i = 0;
	negative = 0;
	result_l = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	negative = ft_negative_add(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result_l = (result_l * 10) + (str[i] - '0');
		i++;
	}
	result = result_l;
	return (result * negative);
}
