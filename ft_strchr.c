/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:35:50 by ammirzae          #+#    #+#             */
/*   Updated: 2026/05/04 07:18:11 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int num)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)num)
			return ((char *)&str[i]);
		i++;
	}
	if ((unsigned char)num == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
/*
int	main(void)
{
	int		i;
	char	*str = NULL;
	char	str2 = 'b';
	char	*str3 = NULL;
	char	str4 = 'b';
	char	*len;
	char	*ft_len;

	i = 0;
	printf("strings before: '%s'  '%c'\n", str, str2);
//	len = strchr(str, str2);
	ft_len = ft_strchr(str3, str4);
//	printf("strchr:'%s'\n",len);
	printf("ft_strchr:'%s'\n\n",ft_len);


	printf("\n\n");

	char	str1[] = {"0123456789"};
	char	str21[20] = {"g"};
	char	str31[] = {"0123456789"};
	char	str41[20] = {"g"};

	printf("strings before: '%s'  '%s'\n", str1, str21);
	len = strchr(str1, str21[0]);
	ft_len = ft_strchr(str31, str41[0]);
	printf("strchr:'%s'\n",len);
	printf("ft_strchr:'%s'\n\n",ft_len);

	printf("\n\n");



char sstr1[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied."};
	char	sstr2[10] = {"?"};
char sstr3[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied."};
	char	sstr4[10] = {"?"};


	printf("strings before: '%s'  '%s'\n", sstr1, sstr2);
	len = strchr(sstr1, sstr2[0]);
	ft_len =ft_strchr(sstr3, sstr4[0]);
	printf("strchr: '%s'\n",len);
	printf("ft_strchr: '%s'\n\n", ft_len);

	printf("\n\n");


	char	str11[] = {"8"};
	char	str211[] = {"b21e1a2aa79225781319a44d9f538939c4ae038f"};
	char	str311[] = {"8"};
	char	str411[] = {"b21e1a2aa79225781319a44d9f538939c4ae038f"};

	printf("strings before: '%s'  '%s'\n", str11, str211);
	len = strchr(str211, str11[0]);
	ft_len = ft_strchr(str411, str311[0]);
	printf("strchr:'%s'\n",len);
	printf("ft_strchr:'%s'\n\n",ft_len);
}
*/
