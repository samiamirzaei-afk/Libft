/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:52:57 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/22 14:49:00 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


#define LIBBSD_OVERLAY	1
char  *ft_strchr(const char *src, int size);
char	*strchr(const char *src, int size);

int	main(void)
{
	int		i;
	char	str[] = {"0123456789"};
	char	str2[20] = {""};
	char	str3[] = {"0123456789"};
	char	str4[20] = {""};
	char	*len;
	char	*ft_len;
	
	i = 0;
	printf("strings before: '%s'  '%s'\n", str, str2);
	len = strchr(str, str2[0]);
	ft_len = ft_strchr(str3, str4[0]);
	printf("strchr:'%s'\n",len);
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
	
	

	char	sstr1[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr2[10] = {"."};
	char	sstr3[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr4[10] = {"."};
	
	
	printf("strings before: '%s'  '%s'\n", sstr1, sstr2);
	len = strchr(sstr1, sstr2[0]);
	ft_len =ft_strchr(sstr3, sstr4[0]);
	printf("strchr: '%s'\n",len);
	printf("ft_strchr: '%s'\n\n", ft_len);
	
	printf("\n\n");
	

	char	str11[] = {""};
	char	str211[20] = {""};
	char	str311[] = {""};
	char	str411[20] = {""};

	printf("strings before: '%s'  '%s'\n", str11, str211);
	len = strchr(str211, str11[0]);
	ft_len = ft_strchr(str411, str311[0]);
	printf("strchr:'%s'\n",len);
	printf("ft_strchr:'%s'\n\n",ft_len);



}

/*	while (argv[1][i] != '\0')
	{
		printf("%c = %d\n", argv[1][i], ft_isalpha(argv[1][i]));
		i++;
	}
*/
