/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:52:57 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/23 13:26:25 by ammirzae         ###   ########.fr       */
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

int memcmp(const void *s1, const void *s2, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);


int	main(void)
{
	int		i;
	char	str[] = {"0123456789"};
	char	str2[20] = {"2"};
	char	str3[] = {"0123456789"};
	char	str4[20] = {"2"};
	int		len;
	int		ft_len;
	
	i = 0;
	printf("strings before: '%s'  '%s'\n", str, str2);
	len = memcmp(str, str2, 3);
	ft_len = ft_memcmp(str3, str4, 3);
	printf("memcmp:'%d'\n",len);
	printf("ft_memcmp:'%d'\n\n",ft_len);

	
	printf("\n\n");
	
	char	str1[] = {"0123456789"};
	char	str21[20] = {"g"};
	char	str31[] = {"0123456789"};
	char	str41[20] = {"g"};
	
	printf("strings before: '%s'  '%s'\n", str1, str21);
	len = memcmp(str1, str21, 7);
	ft_len = ft_memcmp(str31, str41, 7);
	printf("memcmp:'%d'\n",len);
	printf("ft_memcmp:'%d'\n\n",ft_len);
	
	printf("\n\n");
	
	

	char	sstr1[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr2[10] = {"."};
	char	sstr3[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr4[10] = {"."};
	
	
	printf("strings before: '%s'  '%s'\n", sstr1, sstr2);
	len = memcmp(sstr1, sstr2, 30);
	ft_len =ft_memcmp(sstr3, sstr4, 30);
	printf("memcmp: '%d'\n",len);
	printf("ft_memcmp: '%d'\n\n", ft_len);
	
	printf("\n\n");
	

	char	str11[] = {""};
	char	str211[20] = {""};
	char	str311[] = {""};
	char	str411[20] = {""};

	printf("strings before: '%s'  '%s'\n", str11, str211);
	len = memcmp(str211, str11, 1);
	ft_len = ft_memcmp(str411, str311, 1);
	printf("memcmp:'%d'\n",len);
	printf("ft_memcmp:'%d'\n\n",ft_len);

	printf("\n\n");
	

	char	str12[] = {"lol"};
	char	str212[] = {"lol"};
	char	str312[] = {"lol"};
	char	str412[] = {"lol"};

	printf("strings before: '%s'  '%s'\n", str12, str212);
	len = memcmp(str12, str212, 3);
	ft_len = ft_memcmp(str312, str412, 3);
	printf("strrchr:'%d'\n",len);
	printf("ft_strrchr:'%d'\n\n",ft_len);
	
		printf("\n\n");
	
	

	char	sstr22[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr33[10] = {""};
	char	sstr44[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr55[10] = {""};
	
	
	printf("strings before: '%s'  '%s'\n", sstr1, sstr2);
	len = memcmp(sstr22, sstr33, 9999);
	ft_len =ft_memcmp(sstr44, sstr55, 9999);
	printf("strrchr: '%d'\n",len);
	printf("ft_strrchr: '%d'\n\n", ft_len);


}

/*	while (argv[1][i] != '\0')
	{
		printf("%c = %d\n", argv[1][i], ft_isalpha(argv[1][i]));
		i++;
	}
*/
