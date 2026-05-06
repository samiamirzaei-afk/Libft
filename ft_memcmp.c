/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:04:09 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/29 12:58:45 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	size_t			i;
	unsigned char	*ptr_str1;
	unsigned char	*ptr_str2;

	i = 0;
	ptr_str1 = (unsigned char *)str1;
	ptr_str2 = (unsigned char *)str2;
	while (i < size)
	{
		if (ptr_str1[i] != ptr_str2[i])
			return (ptr_str1[i] - ptr_str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str000[] = {"0123456789"};
	char	sep001[] = {"2"};
	char	str002[] = {"0123456789"};
	int	len;
	int	ft_len;
	int	size = 3;
	
	
printf("strings before: '%s'  sep:'%s' size:'%d'\n", str000, sep001, size);
	len = memcmp(str000, sep001, size);
	ft_len = ft_memcmp(str002, sep001, size);
	printf("memcmp:'%d'\n",len);
	printf("ft_memcmp:'%d'\n",ft_len);

	
	printf("\n\n");

	
	char	str003[] = {"0123456789"};
	char	sep004[] = {"g"};
	char	str005[] = {"0123456789"};
	size = 7;

printf("strings before: '%s'  sep:'%s' size:'%d'\n", str003, sep004, size);
	len = memcmp(str003, sep004, size);
	ft_len = ft_memcmp(str003,sep004, size);
	printf("memcmp:'%d'\n",len);
	printf("ft_memcmp:'%d'\n\n",ft_len);
	
	printf("\n\n");
	
	
char    str006[] = {"Hast du etwas Zeit für mich? Dann sing
  ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg
   zum Horizont. Denkst du vielleicht grad an mich?"};
    char    sep007[] = {"."};
char    str008[] = {"Hast du etwas Zeit für mich? Dann singe
  ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg
   zum Horizont. Denkst du vielleicht grad an mich?"};
size = 30;
    printf("strings before: '%s'  sep:'%s' size:'%d'\n", str006, sep007, size);
    len = memcmp(str006, sep007, size);
    ft_len = ft_memcmp(str008, sep007, size);
    printf("memcmp:'%d'\n",len);
    printf("ft_memcmp:'%d'\n",ft_len);

    
    printf("\n\n");

    
    char    str009[] = {""};
    char    sep010[] = {""};
    char    str011[] = {""};
    size = 1;
    printf("strings before: '%s'  sep:'%s' size:'%d'\n", str009, sep010, size);
    len = memcmp(str009, sep010, size);
    ft_len = ft_memcmp(str011, sep010, size);
    printf("memcmp:'%d'\n",len);
    printf("ft_memcmp:'%d'\n\n",ft_len);
    
    printf("\n\n");

    
    char    str012[] = {"lol"};
    char    sep013[] = {"lol"};
    char    str014[] = {"lol"};
    size = 3;
    printf("strings before: '%s'  sep:'%s' size:'%d'\n", str012, sep013, size);
    len = memcmp(str012, sep013, size);
    ft_len = ft_memcmp(str014, sep013, size);
    printf("memcmp:'%d'\n",len);
    printf("ft_memcmp:'%d'\n\n",ft_len);
    
    printf("\n\n");

    
    char    str015[] = {"Hast du etwas Zeit für mich? Dann
     singe ich ein  Lied für dich Von 99 Luftballons; Auf
 ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
    char    sep016[] = ".";
    char    str017[] = {"Hast du etwas Zeit für mich? Dann
     singe ich ein Lied für dich Von 99 Luftballons; Auf
ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
    size = 999;
    printf("strings before: '%s'  sep:'%s' size:'%d'\n", str015, sep016, size);
    len = memcmp(str015, sep016, size);
    ft_len = ft_memcmp(str017, sep016, size);
    printf("memcmp:'%d'\n",len);
    printf("ft_memcmp:'%d'\n\n",ft_len);
    
    printf("\n\n");

    
    char    *str018 = NULL;
    char    *sep019 = NULL;
    char    *str020 = NULL;
    size = 999;
    printf("strings before: '%s'  sep:'%s' size:'%d'\n", str018, sep019, size);
//    len = memcmp(str018, sep019, size);
 //   ft_len = ft_memcmp(str020, sep019, size);
    printf("memcmp:'%d'\n",len);
    printf("ft_memcmp:'%d'\n\n",ft_len);
}*/
