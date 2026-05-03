/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 12:06:38 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/25 15:23:48 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int number)
{
	if (number >= 'A' && number <= 'z')
	{
		if (!(number >= '[' && number <= '`'))
			return (1);
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
    for (int i = 0; i < 128; i++)
    {
        printf("testing:'%c' %d\n", i , ft_isalpha(i));
    }
    
    return 0;
}

