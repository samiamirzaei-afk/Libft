/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:40:33 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/24 18:34:03 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <stdint.h>


static int	ft_checks(size_t nmemb, size_t size)
{
	size_t result;
	size_t temp;

	result = -1;
	temp = result / size;
	if(nmemb > temp)
		return(0);
	return(1);		
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	
	if (ft_checks(nmemb, size) == 0)
		return(NULL);
	if (nmemb <= 0 || size <= 0)
		return (malloc(nmemb * size));
	result = malloc(nmemb * size);
	if(result == NULL)
	return (NULL);
	result = memset(result, 0, (nmemb * size));
	return (result);
}


	
int	main(void)
{
//	printf("result: '%s'\n",(char*)ft_calloc(10, sizeof(char)));

	char	*ptr1;
	char	*ptr2;
	char	*ptr3;
	unsigned char b;
	int i;

	ptr1 = ft_calloc(10, sizeof(char));
	ptr2 = calloc(10, sizeof(char));
	ptr3 = malloc(10 * sizeof(char));

	for(i = 0; i < 9; i++)
	{
		ptr2[i] = '5';
	}
		ptr2[i] = '\0';
	for(i = 0; i < 9; i++)
	{
		ptr3[i] = '5';
	}
		ptr3[i] = '\0';

	for(i = 0; i < 9; i++)
	{
		ptr1[i] = '5';
	}
		ptr1[i] = '\0';


	printf("ft_calloc: '%s'\n",ptr1);
	printf("calloc: '%s'\n",ptr2);
	printf("malloc: '%s'\n",ptr3);


free(ptr2);
free(ptr3);
free(ptr1);


}



/*
static void	*ft_checks(size_t nmemb, size_t size, void *ptr)
{
	size_t total;
	size_t i;
	char	*ptr2;

	ptr2 = (char*)ptr;

	total = nmemb * size;
	i = 0;
	while((i * size) < ((total / size) - ((nmemb - (nmemb - 1)) * size)))
	{
		ptr2[i * size] = (char)'5';
		printf("loop:'%d'\n", i);
		i++;
	}
	ptr2[i*size] = (char)'\0';
	return (ptr);

}
*/
