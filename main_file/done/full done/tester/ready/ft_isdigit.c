/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:50:42 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/20 15:51:32 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int num)
{
	if (num >= '0' && num <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    for (int i = 0; i < 128; i++)
    {
        printf("testing:'%c' %d\n", i , ft_isdigit(i));
    }
    
    return 0;
}
*/
