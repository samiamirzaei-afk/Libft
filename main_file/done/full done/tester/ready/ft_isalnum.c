/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:59:02 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/20 13:59:05 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int num)
{
	if (num >= '0' && num <= '9')
		return (1);
	if (num >= 'A' && num <= 'Z')
		return (1);
	if (num >= 'a' && num <= 'z')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    for (int i = 0; i < 128; i++)
    {
        printf("testing:'%c' %d\n", i , ft_isalnum(i));
    }
    
    return 0;
}
*/
