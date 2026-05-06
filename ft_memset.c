/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 08:55:16 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/30 09:55:15 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t length)
{
	size_t			i;
	unsigned char	*ptr;

	if (s == NULL)
		return (s);
	ptr = (unsigned char *)s;
	i = 0;
	while (i < length)
	{
		*ptr = c;
		i++;
		ptr += 1;
	}
	return (s);
}
/*
int	main(void)
{
	int	i;
	char str001[] = {"0123456789"};
	char str002[] = {"0123456789"};

	int array001[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int array002[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	i = 0;

	printf("strings before: %s\n", str001);
	memset((void*)&str001[5], '?', 3);
	ft_memset((void*)&str002[5], '?', 3);
	printf("memset after: %s\n", str001);
	printf("ft_memset after: %s\n", str002);

	while( i < 8)
	{
		printf("%i ", array002[i]);
		i++;
	}
	printf("\n");

	memset((void*)&array001[2], '?', 3);
	ft_memset((void*)&array002[2], '?', 3);
	i = 0;
	printf("memeset after:");
	while( i < 8)
	{
		printf("%i ", array001[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("ft_memeset after:");
	while( i < 8)
	{
		printf("%i ", array002[i]);
		i++;
	}
	printf("\n");

	char *str003 = NULL;
	char *str004 = NULL;

	printf("strings before: %s\n", str003);
	memset(str001, '?', 3);
	ft_memset(str002, '?', 3);
	printf("memeset after: %s\n", str003);
	printf("ft_memset after: %s\n", str004);


	char str005[] = {"0123456789"};
	char str006[] = {"0123456789"};

	printf("strings before: %s\n", str005);
	memset(str005, '?', 20);
	ft_memset(str006, '?', 20);
	printf("memset after: %s\n", str005);
	printf("ft_memset after: %s\n", str006);
}
*/
