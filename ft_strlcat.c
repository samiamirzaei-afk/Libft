/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:31:46 by ammirzae          #+#    #+#             */
/*   Updated: 2026/05/09 08:14:13 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_i;
	size_t	dest_i;
	size_t	result;

	src_i = 0;
	dest_i = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	while (src[src_i] != '\0')
		src_i++;
	result = src_i + dest_i;
	if (size <= dest_i)
		return (src_i + size);
	src_i = 0;
	while (src[src_i] != '\0' && dest_i < size - 1)
	{
		dest[dest_i] = src[src_i];
		dest_i++;
		src_i++;
	}
	dest[dest_i] = '\0';
	return (result);
}

/*
#define LIBBSD_OVERLAY	1

#include <stdio.h>
#include <string.h>
#include <stddef.h>
int	main(void)
{
	int		i;
	char	str[] = {"0123456789"};
	char	*str2 = NULL;
	char	str3[] = {"0123456789"};
	char	*str4 = NULL;
	int	len;
	int	ft_len;
	
	i = 0;
	printf("strings before: '%s'  '%s'\n", str, str2);
	len = strlcat(str2, str, 20);
	return (0);
//	ft_len = ft_strlcat(str4, str3, 20);
	printf("strlcat:'%d' '%s'\n",len, str2);
	printf("ft_strlcat:'%d' '%s'\n\n",ft_len, str4);

	
	printf("\n\n");
	
	char	str1[] = {"0123456789"};
	char	str21[20] = {""};
	char	str31[] = {"0123456789"};
	char	str41[20] = {""};
	
	printf("strings before: '%s'  '%s'\n", str1, str21);
	len = strlcat(str21, str1, 20);
	ft_len = ft_strlcat(str41, str31, 20);
	printf("strlcat:'%d' '%s'\n",len, str21);
	printf("ft_strlcat:'%d' '%s'\n\n",ft_len, str41);
	
	printf("\n\n");
	
	

char sstr1[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied."};
	char	sstr2[10] = {""};
char sstr3[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied."};
	char	sstr4[10] = {""};
	
	
	printf("strings before: '%s'  '%s'\n", sstr1, sstr2);
	len = strlcat(sstr2, sstr1, 10);
	ft_len =ft_strlcat(sstr4, sstr3, 10);
	printf("strlcat:'%d' %s\n",len, sstr2);
	printf("ft_strlcat:'%d' %s\n\n",ft_len, sstr4);
	
	printf("\n\n");
	

	char	str11[] = {""};
	char	str211[20] = {""};
	char	str311[] = {""};
	char	str411[20] = {""};

	printf("strings before: '%s'  '%s'\n", str11, str211);
	len = strlcat(str211, str11, 20);
	ft_len = ft_strlcat(str411, str311, 20);
	printf("strlcat:'%d' '%s'\n",len, str211);
	printf("ft_strlcat:'%d' '%s'\n\n",ft_len, str411);
}
*/
