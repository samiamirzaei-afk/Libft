/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:52:57 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/23 17:42:50 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


#define LIBBSD_OVERLAY	1

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strnstr(const char *big, const char *little, size_t len);
char    *strnstr(const char *big, const char *little, size_t len);


int	main(void)
{
	int		i;
	char	str[] = {"0123456789"};
	char	str2[20] = {"2"};
	char	str3[] = {"0123456789"};
	char	str4[20] = {"2"};
	char		*len;
	char		*ft_len;
	
	i = 0;
	printf("strings before: '%s'  '%s'\n", str, str2);
	len = strnstr(str, str2, 3);
	ft_len = ft_strnstr(str3, str4, 3);
	printf("strnstr:'%s'\n",len);
	printf("ft_strnstr:'%s'\n\n",ft_len);

	
	printf("\n\n");
	
	char	str1[] = {"0123456789"};
	char	str21[20] = {"g"};
	char	str31[] = {"0123456789"};
	char	str41[20] = {"g"};
	
	printf("strings before: '%s'  '%s'\n", str1, str21);
	len = strnstr(str1, str21, 7);
	ft_len = ft_strnstr(str31, str41, 7);
	printf("strnstr:'%s'\n",len);
	printf("ft_strnstr:'%s'\n\n",ft_len);
	
	printf("\n\n");
	
	

	char	sstr1[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr2[10] = {"ich"};
	char	sstr3[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr4[10] = {"ich"};
	
	
	printf("strings before: '%s'  '%s'\n", sstr1, sstr2);
	len = strnstr(sstr1, sstr2, 30);
	ft_len =ft_strnstr(sstr3, sstr4, 30);
	printf("strnstr: '%s'\n",len);
	printf("ft_strnstr: '%s'\n\n", ft_len);
	
	printf("\n\n");
	

	char	str11[] = {""};
	char	str211[20] = {""};
	char	str311[] = {""};
	char	str411[20] = {""};

	printf("strings before: '%s'  '%s'\n", str11, str211);
	len = strnstr(str211, str11, 1);
	ft_len = ft_strnstr(str411, str311, 1);
	printf("strnstr:'%s'\n",len);
	printf("ft_strnstr:'%s'\n\n",ft_len);

	printf("\n\n");
	

	char	str12[] = {"lol"};
	char	str212[] = {"lol"};
	char	str312[] = {"lol"};
	char	str412[] = {"lol"};

	printf("strings before: '%s'  '%s'\n", str12, str212);
	len = strnstr(str12, str212, 3);
	ft_len = ft_strnstr(str312, str412, 3);
	printf("strrchr:'%s'\n",len);
	printf("ft_strrchr:'%s'\n\n",ft_len);
	
		printf("\n\n");
	
	

	char	sstr22[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr33[10] = {""};
	char	sstr44[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr55[10] = {""};
	
	
	printf("strings before: '%s'  '%s'\n", sstr1, sstr2);
	len = strnstr(sstr22, sstr33, 9999);
	ft_len =ft_strnstr(sstr44, sstr55, 9999);
	printf("strrchr: '%s'\n",len);
	printf("ft_strrchr: '%s'\n\n", ft_len);


}

/*	while (argv[1][i] != '\0')
	{
		printf("%c = %d\n", argv[1][i], ft_isalpha(argv[1][i]));
		i++;
	}
*/
