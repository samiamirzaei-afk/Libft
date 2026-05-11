/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:40:33 by ammirzae          #+#    #+#             */
/*   Updated: 2026/05/06 17:20:15 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checks(size_t nmemb, size_t size)
{
	size_t	result;
	size_t	temp;

	result = -1;
	temp = result / size;
	if (nmemb > temp)
		return (0);
	return (1);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb <= 0 || size <= 0)
		return (malloc(1));
	if (ft_checks(nmemb, size) == 0)
		return (NULL);
	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);
	result = ft_memset(result, 0, (nmemb * size));
	return (result);
}
/*
int main(void)
{
	// Test 1: Normal allocation with char
	char	*ptr001;
	char	*ptr002;
	int size = 10;
	int i;

	ptr001 = ft_calloc(size, sizeof(char));
	ptr002 = calloc(size, sizeof(char));
	for(i = 0; i < size - 1; i++)
	{
		ptr001[i] = '5';
	}
	ptr001[i] = '\0';
	for(i = 0; i < size - 1; i++)
	{
		ptr002[i] = '5';
	}
	ptr002[i] = '\0';
printf("Test 1 - size: '%d', type:char (1 byte:'%lu')\n", size, sizeof(char));
	printf("ft_calloc: '%s'\n", ptr001);
	printf("calloc:    '%s'\n", ptr002);
	printf("Both zero-initialized before fill: %s\n\n",
		(memcmp(ptr001, ptr002, size) == 0) ? "PASS" : "FAIL");
	free(ptr001);
	free(ptr002);

	int	*ptr003;
	int	*ptr004;
	size = 5;

	ptr003 = ft_calloc(size, sizeof(int));
	ptr004 = calloc(size, sizeof(int));
	for(i = 0; i < size; i++)
	{
		ptr003[i] = 42;
		ptr004[i] = 42;
	}
printf("Test 2 - size: '%d', type: int ('%lu' bytes)\n", size, sizeof(int));
	printf("ft_calloc first 5 values: %d %d %d %d %d\n",
		ptr003[0], ptr003[1], ptr003[2], ptr003[3], ptr003[4]);
	printf("calloc first 5 values:    %d %d %d %d %d\n",
		ptr004[0], ptr004[1], ptr004[2], ptr004[3], ptr004[4]);
printf("Zero-initialization before fill: %s\n\n",
	(memcmp(ptr003, ptr004, size * sizeof(int)) == 0) ? "PASS" : "FAIL");
	free(ptr003);
	free(ptr004);

	// Test 3: Zero size (should return NULL or unique pointer)
	char	*ptr005;
	char	*ptr006;

	ptr005 = ft_calloc(0, sizeof(char));
	ptr006 = calloc(0, sizeof(char));
	printf("Test 3 - size: 0, type: char\n");
printf("ft_calloc returned: %s\n", (ptr005 == NULL) ? "NULL" : "non-NULL");
printf("calloc returned:    %s\n", (ptr006 == NULL) ? "NULL" : "non-NULL");
	if (ptr005) free(ptr005);
	if (ptr006) free(ptr006);

	// Test 4: Very large allocation (should fail)
	void	*ptr007;
	void	*ptr008;
	size_t	large_size = 999999999;

	ptr007 = ft_calloc(large_size, sizeof(char));
	ptr008 = calloc(large_size, sizeof(char));
	printf("Test 4 - very large size: %zu bytes\n", large_size);
printf("ft_calloc returned: %s\n", 
(ptr007 == NULL) ? "NULL (FAIL)" : "non-NULL");
printf("calloc returned:    %s\n", 
(ptr008 == NULL) ? "NULL (FAIL)" : "non-NULL");
printf("Both returned NULL: %s\n\n",
		(ptr007 == NULL && ptr008 == NULL) ? "PASS" : "FAIL");

	// Test 5: Zero-initialization verification with struct
	struct test_struct {
		int a;
		char b;
		long c;
	};
	struct test_struct	*ptr009;
	struct test_struct	*ptr010;
	int struct_size = 3;

	ptr009 = ft_calloc(struct_size, sizeof(struct test_struct));
	ptr010 = calloc(struct_size, sizeof(struct test_struct));
printf("Test 5 - struct with int, char, long (should be all zeros)\n");
printf("ft_calloc%d,%d,%ld\n",ptr009[0].a, ptr009[0].b, ptr009[0].c);
printf("calloc%d,%d,%ld\n",ptr010[0].a, ptr010[0].b, ptr010[0].c);
	free(ptr009);
	free(ptr010);

	// Test 6: Multiplication overflow protection
	void	*ptr011;
	void	*ptr012;
	size_t	nmemb = 1000000;
	size_t	bigsize = 1000000;

	ptr011 = ft_calloc(nmemb, bigsize);
	ptr012 = calloc(nmemb, bigsize);
printf("nmemb=%zu, size=%zu\n", nmemb, bigsize);

printf("\n");
	return (0);
}
*/
