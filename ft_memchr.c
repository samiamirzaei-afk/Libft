/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:34:50 by ammirzae          #+#    #+#             */
/*   Updated: 2026/05/06 10:25:50 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int number, size_t size)
{
	unsigned char	*ptr_str;
	size_t			i;

	if (size == 0)
		return (NULL);
	ptr_str = (unsigned char *)str;
	i = 0;
	if (ptr_str[i] == (unsigned char)number)
		return (&ptr_str[i]);
	while (i < size)
	{
		if (ptr_str[i] == (unsigned char)number)
			return (&ptr_str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str000[] = {"0123456789"};
	char	sep001 = '2';
	char	str002[] = {"0123456789"};
	char	*len;
	char	*ft_len;
	int	size = 3;
	
	
printf("strings before: '%s'  sep:'%c' size:'%d'\n", str000, sep001, size);
	len = memchr(str000, sep001, size);
	ft_len = ft_memchr(str002, sep001, size);
	printf("memchr:'%s'\n",len);
	printf("ft_memchr:'%s'\n",ft_len);

	
	printf("\n\n");

	
	char	str003[] = {"0123456789"};
	char	sep004 = 'g';
	char	str005[] = {"0123456789"};
	size = 7;

printf("strings before: '%s'  sep:'%c' size:'%d'\n", str003, sep004, size);
	len = memchr(str003, sep004, size);
	ft_len = ft_memchr(str003,sep004, size);
	printf("memchr:'%s'\n",len);
	printf("ft_memchr:'%s'\n\n",ft_len);
	
	printf("\n\n");
	
	
char    str006[] = {"Hast du etwas Zeit für mich? Dann sing  ich ein Lied für 
dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du 
vielleicht grad an mich?"};
    char    sep007 = '.';
char    str008[] = {"Hast du etwas Zeit für mich? Dann singe  ich ein Lied
 für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du 
 vielleicht grad an mich?"};
size = 30;
    printf("strings before: '%s'  sep:'%c' size:'%d'\n", str006, sep007, size);
    len = memchr(str006, sep007, size);
    ft_len = ft_memchr(str008, sep007, size);
    printf("memchr:'%s'\n",len);
    printf("ft_memchr:'%s'\n",ft_len);

    
    printf("\n\n");

    
    char    str009[] = {""};
    char    sep010 = '\0';
    char    str011[] = {""};
    size = 1;
    printf("strings before: '%s'  sep:'%c' size:'%d'\n", str009, sep010, size);
    len = memchr(str009, sep010, size);
    ft_len = ft_memchr(str011, sep010, size);
    printf("memchr:'%s'\n",len);
    printf("ft_memchr:'%s'\n\n",ft_len);
    
    printf("\n\n");

    
    char    str012[] = {"lol"};
    char    sep013 = 'l';
    char    str014[] = {"lol"};
    size = 3;
    printf("strings before: '%s'  sep:'%c' size:'%d'\n", str012, sep013, size);
    len = memchr(str012, sep013, size);
    ft_len = ft_memchr(str014, sep013, size);
    printf("memchr:'%s'\n",len);
    printf("ft_memchr:'%s'\n\n",ft_len);
    
    printf("\n\n");

    
    char    str015[] = {"Hast du etwas Zeit für mich? Dann singe ich ein 
Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du
 vielleicht grad an mich?"};
    char    sep016 = '.';
    char    str017[] = {"Hast du etwas Zeit für mich? Dann singe ich ein
     Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. 
     Denkst du vielleicht grad an mich?"};
    size = 999;
    printf("strings before: '%s'  sep:'%c' size:'%d'\n", str015, sep016, size);
    len = memchr(str015, sep016, size);
    ft_len = ft_memchr(str017, sep016, size);
    printf("memchr:'%s'\n",len);
    printf("ft_memchr:'%s'\n\n",ft_len);
    
    printf("\n\n");

    
    char    *str018 = NULL;
    char    sep019 = 'g';
    char    *str020 = NULL;
    size = 999;
    printf("strings before: '%s'  sep:'%c' size:'%d'\n", str018, sep019, size);
//    len = memchr(str018, sep019, size);
    ft_len = ft_memchr(str020, sep019, size);
    printf("memchr:'%s'\n",len);
    printf("ft_memchr:'%s'\n\n",ft_len);
}
*/
