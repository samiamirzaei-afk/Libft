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


void	ft_bzero(void *s, size_t length)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < length)
	{
		*ptr = '\0';
		i++;
		ptr += 1;
	}
}
//int	main(int argc, char **argv)
int	main(void)
{
	int		i;
	char	str[] = {"0123456789"};
	char	str2[] = {"0123456789"};
	int		array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	i = 0;
	printf("strings before: %s\n", str);
	bzero((void *)&str[5], 3);
	ft_bzero((void *)&str2[5], 3);
	printf("string after: %s\n", str);
	printf("string2 after: %s\n", str2);
	printf("arrays before:");
	while (i < 8)
	{
		printf("%i ", array2[i]);
		i++;
	}
	printf("\n");
	bzero((void *)&array[2], 3);
	ft_bzero((void *)&array2[2], 3);
	i = 0;
	printf("arrays after:");
	while (i < 8)
	{
		printf("%i ", array[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("arrays2 after:");
	while (i < 8)
	{
		printf("%i ", array2[i]);
		i++;
	}
	printf("\n");
}

/*	while (argv[1][i] != '\0')
	{
		printf("%c = %d\n", argv[1][i], ft_isalpha(argv[1][i]));
		i++;
	}
*/
