/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:43:18 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/29 14:47:27 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	if (!dest || !src)
		return (NULL);
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	i = 0;
	if (*ptr_dest > *ptr_src)
	{
		while (length > i)
		{
			ptr_dest[length] = ptr_src[length];
			length--;
		}
		return (dest);
	}
	while (i < length)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>
int    main(void)
{
    char    real[100] = "ABCDEFGHIJ";
    char    fake[100] = "ABCDEFGHIJ";
    char    help[100] = "ABCDEFGHIJ";
    int len = 16;

    printf("string: %s\n\n", real);
    memmove(real + 2, real, len);
    printf("memmove: %s\n", real);
    
	ft_memmove(help + 2, help, len);
    printf("memcpy: %s\n", real);

    ft_memcpy(fake + 2, fake, len);
	  printf("ft_memcpy: %s\n", fake);
}
*/
