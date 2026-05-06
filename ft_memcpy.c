/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:03:50 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/29 14:40:40 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t length)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	if (!dest || !src)
		return (NULL);
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	i = 0;
	while (i < length)
	{
		*ptr_dest = *ptr_src;
		i++;
		ptr_dest += 1;
		ptr_src += 1;
	}
	return (dest);
}
/*
int	main()
{
	char	str001[25] = {"0123456789"};
	char	str002[25] = {"0123456789"};
	char	str003[] = {"abcdefg"};
	int size = 6;
	
	printf("strings before: '%s' copy: '%s', size:'%d'\n", str001, str003, size);
	memcpy((void *)&str001[5], str003, size);
	ft_memcpy((void *)&str002[5], str003, size);
	printf("memcpy: %s\n", str001);
	printf("ft_memcpy: %s\n", str002);
	
	printf("\n\n");
	
	

char	str004[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied"};
char	str005[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied"};
	char	str006[] = {"lol"};
	size = 20;
	
	printf("strings before: '%s' copy: '%s', size:'%d'\n", str004, str006, size);
	memcpy((void *)&str004[5], str006, size);
	ft_memcpy((void *)&str005[5], str006, size);
	printf("memcpy: %s\n", str004);
	printf("ft_memcpy: %s\n", str005);

	printf("\n\n");
	
	

char	str007[] = {"Hast du etwas Zeit für mich?"};
char	str008[] = {"Hast du etwas Zeit für mich?"};
	char	*str009 = NULL;
	size = 13;
	
	printf("strings before: '%s' copy: '%s', size:'%d'\n", str007, str009, size);
//	memcpy((void *)&str007[5], str009, size);
	ft_memcpy((void *)&str008[5], str009, size);
	printf("memcpy: %s\n", str007);
	printf("ft_memcpy: %s\n", str008);


	printf("\n\n");
	
	

	char	*str010 = NULL;
	char	*str011 = NULL;
	char	str012[] = {"lol"};
	size = 13;
	
	printf("strings before: '%s' copy: '%s', size:'%d'\n", str010, str012, size);
//	memcpy(str010, str012, size);
	ft_memcpy(str011, str012, size);
	printf("memcpy: %s\n", str010);
	printf("ft_memcpy: %s\n", str011);

}
*/
