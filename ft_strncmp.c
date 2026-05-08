/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:22:19 by ammirzae          #+#    #+#             */
/*   Updated: 2026/05/06 12:30:42 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char)s1[i] != '\0' || (unsigned char)s2[i] != '\0')
		&& i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int		i;
	char	str[] = {"0123456789"};
	char	str2[20] = {""};
	char	str3[] = {"0123456789"};
	char	str4[20] = {""};
	int		len;
	int		ft_len;
	
	i = 0;
	printf("strings before: '%s'  '%s'\n", str, str2);
	len = strncmp(str, str2, 3);
	ft_len = ft_strncmp(str3, str4, 3);
	printf("strncmp:'%d'\n",len);
	printf("ft_strncmp:'%d'\n\n",ft_len);

	
	printf("\n\n");
	
	char	str1[] = {"0123456789"};
	char	str21[20] = {"g"};
	char	str31[] = {"0123456789"};
	char	str41[20] = {"g"};
	
	printf("strings before: '%s'  '%s'\n", str1, str21);
	len = strncmp(str1, str21, 7);
	ft_len = ft_strncmp(str31, str41, 7);
	printf("strncmp:'%d'\n",len);
	printf("ft_strncmp:'%d'\n\n",ft_len);
	
	printf("\n\n");
	
	
char sstr1[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied"};
	char	sstr2[10] = {"?"};
char sstr3[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied"};
	char	sstr4[10] = {"?"};
	
	
	printf("strings before: '%s'  '%s'\n", sstr1, sstr2);
	len = strncmp(sstr1, sstr2, 30);
	ft_len =ft_strncmp(sstr3, sstr4, 30);
	printf("strncmp: '%d'\n",len);
	printf("ft_strncmp: '%d'\n\n", ft_len);
	
	printf("\n\n");
	

	char	str11[] = {""};
	char	str211[20] = {""};
	char	str311[] = {""};
	char	str411[20] = {""};

	printf("strings before: '%s'  '%s'\n", str11, str211);
	len = strncmp(str211, str11, 1);
	ft_len = ft_strncmp(str411, str311, 1);
	printf("strncmp:'%d'\n",len);
	printf("ft_strncmp:'%d'\n\n",ft_len);

	printf("\n\n");
	

	char	str12[] = {"lol"};
	char	str212[] = {"lol"};
	char	str312[] = {"lol"};
	char	str412[] = {"lol"};

	printf("strings before: '%s'  '%s'\n", str12, str212);
	len = strncmp(str12, str212, 3);
	ft_len = ft_strncmp(str312, str412, 3);
	printf("strrchr:'%d'\n",len);
	printf("ft_strrchr:'%d'\n\n",ft_len);
	
		printf("\n\n");
	
	

char sstr22[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied."};
	char	*sstr33 = NULL;
char sstr44[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied."};
	char	*sstr55 = NULL;
	
	
	printf("strings before: '%s'  '%s'\n", sstr1, sstr2);
//	len = strncmp(sstr22, sstr33, 9999);
//	ft_len =ft_strncmp(sstr44, sstr55, 9999);
	printf("strrchr: '%d'\n",len);
	printf("ft_strrchr: '%d'\n\n", ft_len);
}
*/
