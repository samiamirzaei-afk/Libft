/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:52:57 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/21 10:31:16 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


int	main(void)
{
	int		i;
	char	str[] = {"01"};
	char	str2[] = {"01"};
	char	str3[] = {"01"};
	char	str4[10] = {"01"};
	char	src[] = {"abcdefg"};
	 
	i = 0;
	printf("strings before: %s\n", str);
	memcpy((void *)str, src, 0);
	memcpy((void *)str2, src, 1);
	memcpy((void *)str3, src, 2);
	memcpy((void *)str4, src, 3);
	printf("string after: %s\n", str);
	printf("string2 after: %s\n", str2);
	printf("string2 after: %s\n", str3);
	printf("string2 after: %s\n", str4);
	
	printf("\n\n");
	
	
	
	char	astr[] = {"0123456789"};
	char	astr2[] = {"0123456789"};
	char	asrc[] = {"abcdefg"};
	
	printf("strings before: %s\n", astr);
	memcpy((void *)&astr[5], asrc, 6);
	ft_memcpy((void *)&astr2[5], asrc, 6);
	printf("string after: %s\n", astr);
	printf("string2 after: %s\n", astr2);
	
	printf("\n\n");
	
	

	char	sstr[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	sstr2[] = {"Hast du etwas Zeit für mich? Dann singe ich ein Lied für dich Von 99 Luftballons; Auf ihrem Weg zum Horizont. Denkst du vielleicht grad an mich?"};
	char	ssrc[] = {"lol"};
	
	printf("strings before: %s\n", sstr);
	memcpy((void *)&sstr[5], ssrc, 20);
	ft_memcpy((void *)&sstr2[5], ssrc, 20);
	printf("string after: %s\n", sstr);
	printf("string2 after: %s\n", sstr2);

}

/*	while (argv[1][i] != '\0')
	{
		printf("%c = %d\n", argv[1][i], ft_isalpha(argv[1][i]));
		i++;
	}
*/
