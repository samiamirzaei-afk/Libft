/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:26:09 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/29 10:17:15 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t length)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < length)
	{
		*ptr = '\0';
		i++;
		ptr += 1;
	}
}

/*
int	main(void)
{
	char	str000[] = "ab";
	char	str001[] = "aaaaaabbaahellabo alljbabab";
	char	*str002= (void*)0;
	char	str004[] = "llhello world I am a computerll";



    
	printf("before:'%s' len:'4'\n", str000);
//	bzero(str002, 1);
//    return (0);
 ft_bzero(str000, 2);
 //   return (0);
	printf("after:'%s'\n\n", str000);
//    return (0);
	printf("before:'%s' len:'8'\n", str001);
	ft_bzero(str001, 8);
	printf("after:'%s'\n\n", str001);
	printf("before:'%s' len:'7'\n", str002);
	ft_bzero(str002, 7);
	printf("after:'%s'\n\n", str002);
	printf("before:'%s' len:'4'\n", str004);
	ft_bzero(str004, 4);
	printf("after:'%s'\n\n", str004);
}
*/
