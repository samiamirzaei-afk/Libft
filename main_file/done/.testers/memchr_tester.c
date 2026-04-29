/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:52:57 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/23 11:49:56 by ammirzae         ###   ########.fr       */
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


int	main(void)
{
	int		i;
	char	str[] = {"0123456789"};
	char	str2[20] = {"2"};
	char	str3[] = {"0123456789"};
	char	str4[20] = {"2"};
	char	*len;
	char	*ft_len;
	
	i = 0;
	printf("strings before: '%s'  '%s'\n", str, str2);
	len = memchr(str, str2[0], 3);
	ft_len = ft_memchr(str3, str4[0], 3);
	printf("memchr:'%s'\n",len);
	printf("ft_memchr:'%s'\n\n",ft_len);

	
	printf("\n\n");
	
	char	str1[] = {"0123456789"};
	char	str21[20] = {"g"};
	char	str31[] = {"0123456789"};
	char	str41[20] = {"g"};
	
	printf("strings before: '%s'  '%s'\n", str1, str21);
	len = memchr(str1, str21[0], 7);
	ft_len = ft_memchr(str31, str41[0], 7);
	printf("memchr:'%s'\n",len);
	printf("ft_memchr:'%s'\n\n",ft_len);
	
	printf("\n\n");
	
	

	char	sstr1[] = {"Hast du etwas Zeit für mich? Dann singe
 ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum 
Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr2[10] = {"."};
	char	sstr3[] = {"Hast du etwas Zeit für mich? Dann singe
 ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum
 Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr4[10] = {"."};
	
	
	printf("strings before: '%s'  '%s'\n", sstr1, sstr2);
	len = memchr(sstr1, sstr2[0], 30);
	ft_len =ft_memchr(sstr3, sstr4[0], 30);
	printf("memchr: '%s'\n",len);
	printf("ft_memchr: '%s'\n\n", ft_len);
	
	printf("\n\n");
	

	char	str11[] = {""};
	char	str211[20] = {""};
	char	str311[] = {""};
	char	str411[20] = {""};

	printf("strings before: '%s'  '%s'\n", str11, str211);
	len = memchr(str211, str11[0], 1);
	ft_len = ft_memchr(str411, str311[0], 1);
	printf("memchr:'%s'\n",len);
	printf("ft_memchr:'%s'\n\n",ft_len);

	printf("\n\n");
	

	char	str12[] = {"lol"};
	char	str212[] = {"lol"};
	char	str312[] = {"lol"};
	char	str412[] = {"lol"};

	printf("strings before: '%s'  '%s'\n", str12, str212);
	len = memchr(str12, str212[0], 3);
	ft_len = ft_memchr(str312, str412[0], 3);
	printf("strrchr:'%s'\n",len);
	printf("ft_strrchr:'%s'\n\n",ft_len);
	
		printf("\n\n");
	
	

	char	sstr22[] = {"Hast du etwas Zeit für mich? Dann singe
 ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum
 Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr33[10] = {""};
	char	sstr44[] = {"Hast du etwas Zeit für mich? Dann singe
 ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum
 Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr55[10] = {""};
	
	
	printf("strings before: '%s'  '%s'\n", sstr1, sstr2);
	len = memchr(sstr22, sstr33[0], 9999);
	ft_len =ft_memchr(sstr44, sstr55[0], 9999);
	printf("strrchr: '%s'\n",len);
	printf("ft_strrchr: '%s'\n\n", ft_len);


}

/*	while (argv[1][i] != '\0')
	{
		printf("%c = %d\n", argv[1][i], ft_isalpha(argv[1][i]));
		i++;
	}
*/
