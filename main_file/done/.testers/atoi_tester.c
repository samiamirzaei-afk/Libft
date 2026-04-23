/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:52:57 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/23 18:00:41 by ammirzae         ###   ########.fr       */
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

int atoi(const char *nptr);
int ft_atoi(const char *nptr);

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
	printf("strings before: '%s'\n", str);
	len = atoi(str);
	ft_len = ft_atoi(str3);
	printf("atoi:'%d'\n",len);
	printf("ft_atoi:'%d'\n\n",ft_len);

	
	printf("\n\n");
	
	char	str21[20] = {"      53g345"};
	char	str41[20] = {"      53g345"};
	
	printf("strings before: '%s'\n", str21);
	len = atoi(str21);
	ft_len = ft_atoi(str41);
	printf("atoi:'%d'\n",len);
	printf("ft_atoi:'%d'\n\n",ft_len);
	
	printf("\n\n");
	
	

	char	sstr1[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr2[10] = {"ich"};
	char	sstr3[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr4[10] = {"ich"};
	
	
	printf("strings before: '%s'\n", sstr1);
	len = atoi(sstr1);
	ft_len =ft_atoi(sstr3);
	printf("atoi: '%d'\n",len);
	printf("ft_atoi: '%d'\n\n", ft_len);
	
	printf("\n\n");
	

	char	str11[] = {""};
	char	str211[20] = {""};
	char	str311[] = {""};
	char	str411[20] = {""};

	printf("strings before: '%s'\n", str11);
	len = atoi(str211);
	ft_len = ft_atoi(str411);
	printf("atoi:'%d'\n",len);
	printf("ft_atoi:'%d'\n\n",ft_len);

	printf("\n\n");
	

	char	str12[] = {"-2147483648"};
	char	str312[] = {"-2147483648"};

	printf("strings before: '%s'\n", str12);
	len = atoi(str12);
	ft_len = ft_atoi(str312);
	printf("strrchr:'%d'\n",len);
	printf("ft_strrchr:'%d'\n\n",ft_len);
	
		printf("\n\n");
	
	

	char	sstr33[13] = {"2147483647"};
	char	sstr55[13] = {"2147483647"};
	
	
	printf("strings before:'%s'\n", sstr33);
	len = atoi(sstr33);
	ft_len =ft_atoi(sstr55);
	printf("strrchr: '%d'\n",len);
	printf("ft_strrchr: '%d'\n\n", ft_len);



		printf("\n\n");

    char    sstr44[] = {"214748364711111"};
    char    sstr66[] = {"214748364711111"};


    printf("strings before:'%s'\n", sstr44);
    len = atoi(sstr44);
    ft_len =ft_atoi(sstr66);
    printf("strrchr: '%d'\n",len);
    printf("ft_strrchr: '%d'\n\n", ft_len);

}

/*	while (argv[1][i] != '\0')
	{
		printf("%c = %d\n", argv[1][i], ft_isalpha(argv[1][i]));
		i++;
	}
*/
