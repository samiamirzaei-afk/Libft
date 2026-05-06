/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:43:18 by ammirzae          #+#    #+#             */
/*   Updated: 2026/05/06 12:25:09 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	i = 0;
	if (ptr_dest > ptr_src)
	{
		while (length--)
			ptr_dest[length] = ptr_src[length];
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
    memmove(real + 1, real, len);
    printf("memmove: %s\n", real);
    
	ft_memmove(help + 1, help, len);
    printf("ft_memmove: %s\n", help);

    ft_memcpy(fake + 1, fake, len);
	  printf("ft_memcpy: %s\n\n", fake);

	char Result_OG[] = {67, 68, 67, 68, 69, 70, 45};
	char Result_FT[] = {67, 68, 67, 68, 69, 70, 45};
	char Result_FK[] = {67, 68, 67, 68, 69, 70, 45};
	len = 5;
	
	printf("string: %s\n\n", Result_OG);
	memmove(Result_OG + 1, Result_OG, len);
	printf("memmove: %s\n", Result_OG);

	ft_memmove(Result_FT + 1, Result_FT, len);
	printf("ft_memmove: %s\n", Result_FT);

	ft_memcpy(Result_FK + 1, Result_FK, len);
	printf("ft_memcpy: %s\n\n", Result_FK);
}
*/
