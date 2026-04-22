/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:52:57 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/22 13:39:55 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


#define LIBBSD_OVERLAY	1
size_t  ft_strlcat(char *dest, const char *src, size_t size);
size_t	strlcat(char *dst, const char *src, size_t size);

int	main(void)
{
	int		i;
	char	str[] = {"0123456789"};
	char	str2[20] = {""};
	char	str3[] = {"0123456789"};
	char	str4[20] = {""};
	int	len;
	int	ft_len;
	
	i = 0;
	printf("strings before: '%s'  '%s'\n", str, str2);
	len = strlcat(str2, str, 20);
	ft_len = ft_strlcat(str4, str3, 20);
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
	
	

	char	sstr1[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr2[10] = {""};
	char	sstr3[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
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

/*	while (argv[1][i] != '\0')
	{
		printf("%c = %d\n", argv[1][i], ft_isalpha(argv[1][i]));
		i++;
	}
*/
