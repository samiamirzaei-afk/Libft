/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:52:57 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/21 12:56:40 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


int	main(void)
{
	int		i;
	char	str[] = {"012345"};
	char	str2[] = {"012345"};
	char	str3[] = {"012345"};
	char	str4[] = {"012345"};
	char	src[] = {"ABCDEFG"};
	 
	i = 0;
	printf("strings before: %s\n", str);
	memmove((void *)str, src, 2);
	ft_memmove((void *)str2, src, 2);
	printf("string after: %s\n", str);
	printf("string2 after: %s\n\n", str2);
	
	memmove((void *)str3, src, 4);
	ft_memmove((void *)str4, src, 4);
	printf("string after: %s\n", str3);
	printf("string2 after: %s\n", str4);
	
	printf("\n\n");
	
	
	
	char	astr[] = {"0123456789"};
	char	astr2[] = {"0123456789"};
	char	asrc[] = {"abcdefg"};
	
	printf("strings before: %s\n", astr);
	memmove((void *)&astr[5], asrc, 3);
	ft_memmove((void *)&astr2[5], asrc, 3);
	printf("string after: %s\n", astr);
	printf("string2 after: %s\n", astr2);
	
	printf("\n\n");
	
	

	char	sstr[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr2[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	ssrc[] = {"lol"};
	
	printf("strings before: %s\n", sstr);
	memmove((void *)sstr, ssrc, 4);
	ft_memmove((void *)sstr2, ssrc, 4);
	printf("string after: %s\n", sstr);
	printf("string2 after: %s\n", sstr2);
/*
	char	*s1str = {""};
	char	*s1str2 = {""};
	char	s1src[] = {"lol"};
	
	printf("strings before: %s\n", s1str);
	memmove((void *)s1str, s1src, 4);
	ft_memmove((void *)sstr2, s1src, 4);
	printf("string after: %s\n", s1str);
	printf("string2 after: %s\n", s1str2);
*/

}

/*	while (argv[1][i] != '\0')
	{
		printf("%c = %d\n", argv[1][i], ft_isalpha(argv[1][i]));
		i++;
	}
*/
