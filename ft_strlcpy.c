/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:23:39 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/30 09:56:28 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*

#define LIBBSD_OVERLAY	1
#include <string.h>
#include <stdio.h>
#include <stddef.h>

int	main(void)
{
	int		i;
	char	str[] = {"0123456789"};
	char	str2[20];
	char	str3[] = {"0123456789"};
	char	str4[20];
	int	len;
	int	ft_len;

	i = 0;
	printf("strings before: '%s'  '%s'\n", str, str2);
	len = strlcpy(str2, str, 6);
	ft_len =ft_strlcpy(str4, str3, 6);
	printf("strlcpy:'%d' '%s'\n",len, str2);
	printf("ft_strlcpy:'%d' '%s'\n\n",ft_len, str4);


	printf("\n\n");

	char	str1[] = {"0123456789"};
	char	str21[20];
	char	str31[] = {"0123456789"};
	char	str41[20];

	printf("strings before: '%s'  '%s'\n", str1, str21);
	len = strlcpy(str21, str1, 50);
	ft_len =ft_strlcpy(str41, str31, 50);
	printf("strlcpy:'%d' '%s'\n",len, str21);
	printf("ft_strlcpy:'%d' '%s'\n\n",ft_len, str41);

	printf("\n\n");



	char	sstr1[] = {"Hast du etwas Zeit für mich? Dann singe ich ein"};
	char	sstr2[10];
	char	sstr3[] = {"Hast du etwas Zeit für mich? Dann singe ich ein"};
	char	sstr4[10];


	printf("strings before: '%s'  '%s'\n", sstr1, sstr2);
	len = strlcpy(sstr2, sstr1, 6);
	ft_len =ft_strlcpy(sstr4, sstr3, 6);
	printf("strlcpy:'%d' '%s'\n",len, sstr2);
	printf("ft_strlcpy:'%d' '%s'\n\n",ft_len, sstr4);

	printf("\n\n");


	char	*str11 = NULL;
	char	str211[20] = "";
	char	*str311 = NULL;
	char	str411[20] = "";

	printf("strings before: '%s'  '%s'\n", str11, str211);
//	len = strlcpy(str211, str11, 50);
//	ft_len =ft_strlcpy(str411, str311, 50);
	printf("strlcpy:'%d' '%s'\n",len, str211);
	printf("ft_strlcpy:'%d' '%s'\n\n",ft_len, str411);


	char	str12[] = {"Die neue sudstrecke verbindet!"};
	char	*str212 = NULL;
	char	str312[] = {"Die neue sudstrecke verbindet!"};
	char	*str412 = NULL;

	printf("strings before: '%s'  '%s'\n", str12, str212);
	len = strlcpy(str212, str12, 50);
	ft_len =ft_strlcpy(str412, str312, 50);
	printf("strlcpy:'%d' '%s'\n",len, str212);
	printf("ft_strlcpy:'%d' '%s'\n\n",ft_len, str412);
}
*/
