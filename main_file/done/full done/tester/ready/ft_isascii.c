/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:55:28 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/25 15:23:57 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int num)
{
	if (num >= 0 && num <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    for (int i = 0; i < 128; i++)
    {
        printf("testing:'%c' %d\n", i , ft_isascii(i));
    }
    
    return 0;
}
*/
