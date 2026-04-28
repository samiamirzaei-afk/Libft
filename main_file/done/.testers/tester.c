/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:52:57 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/25 17:53:55 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


#define LIBBSD_OVERLAY	1


char *ft_substr(char const *str, unsigned int start, size_t len);



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaration of the function to test (not implemented here)
char *ft_substr(char const *s, unsigned int start, size_t len);

int main(void)
{

	// Test 1: Normal allocation - basic substring
	char	ptr001[] = {"0123456789"};
	char	*ptr002;
	unsigned int start1 = 1;
	size_t len1 = 4;

	ptr002 = ft_substr(ptr001, start1, len1);
	printf("Test 1 - string: '%s', start: '%u', len: '%zu'\n", ptr001, start1, len1);
	printf("result: '%s'\n", ptr002);
	free(ptr002);
	printf("\n\n");

	// Test 2: Normal allocation - beginning of string
	char	ptr003[] = {"Hello World"};
	char	*ptr004;
	unsigned int start2 = 0;
	size_t len2 = 5;

	ptr004 = ft_substr(ptr003, start2, len2);
	printf("Test 2 - string: '%s', start: '%u', len: '%zu'\n", ptr003, start2, len2);
	printf("result: '%s'\n", ptr004);
	free(ptr004);
	printf("\n\n");

	// Test 3: Normal allocation - end of string
	char	ptr005[] = {"Hello World"};
	char	*ptr006;
	unsigned int start3 = 6;
	size_t len3 = 5;

	ptr006 = ft_substr(ptr005, start3, len3);
	printf("Test 3 - string: '%s', start: '%u', len: '%zu'\n", ptr005, start3, len3);
	printf("result: '%s'\n", ptr006);
	free(ptr006);
	printf("\n\n");

	// Test 4: start is longer than the length of the string
	char	ptr007[] = {"Short"};
	char	*ptr008;
	unsigned int start4 = 10;
	size_t len4 = 5;

	ptr008 = ft_substr(ptr007, start4, len4);
	printf("Test 4 - string: '%s', start: '%u', len: '%zu' (start > strlen)\n", ptr007, start4, len4);
	printf("result: '%s' (should be empty string)\n", ptr008);
	free(ptr008);
	printf("\n\n");

	// Test 5: total (len) is a very big number
	char	ptr009[] = {"Small text"};
	char	*ptr010;
	unsigned int start5 = 2;
	size_t len5 = 999999;

	ptr010 = ft_substr(ptr009, start5, len5);
	printf("Test 5 - string: '%s', start: '%u', len: '%zu' (very large)\n", ptr009, start5, len5);
	printf("result: '%s' (should stop at string end)\n", ptr010);
	free(ptr010);
	printf("\n\n");

	// Test 6: Empty string
	char	ptr011[] = {""};
	char	*ptr012;
	unsigned int start6 = 0;
	size_t len6 = 5;

	ptr012 = ft_substr(ptr011, start6, len6);
	printf("Test 6 - string: '%s' (empty), start: '%u', len: '%zu'\n", ptr011, start6, len6);
	printf("result: '%s' (should be empty)\n", ptr012);
	free(ptr012);
	printf("\n\n");

	// Test 7: start is 0, len is 0 (edge case)
	char	ptr013[] = {"Something"};
	char	*ptr014;
	unsigned int start7 = 0;
	size_t len7 = 0;

	ptr014 = ft_substr(ptr013, start7, len7);
	printf("Test 7 - string: '%s', start: '%u', len: '%zu' (zero length)\n", ptr013, start7, len7);
	printf("result: '%s' (should be empty)\n", ptr014);
	free(ptr014);
	printf("\n\n");

	// Test 8: start equals string length
	char	ptr015[] = {"Exactly"};
	char	*ptr016;
	unsigned int start8 = 7;
	size_t len8 = 3;

	ptr016 = ft_substr(ptr015, start8, len8);
	printf("Test 8 - string: '%s', start: '%u', len: '%zu' (start == strlen)\n", ptr015, start8, len8);
	printf("result: '%s' (should be empty)\n", ptr016);
	free(ptr016);
	printf("\n\n");

	// Test 9: Single character string
	char	ptr017[] = {"A"};
	char	*ptr018;
	unsigned int start9 = 0;
	size_t len9 = 1;

	ptr018 = ft_substr(ptr017, start9, len9);
	printf("Test 9 - string: '%s', start: '%u', len: '%zu' (single char)\n", ptr017, start9, len9);
	printf("result: '%s'\n", ptr018);
	free(ptr018);
	printf("\n\n");

	// Test 10: Start in the middle, len only takes part of remaining string
	char	ptr019[] = {"Programming"};
	char	*ptr020;
	unsigned int start10 = 3;
	size_t len10 = 4;

	ptr020 = ft_substr(ptr019, start10, len10);
	printf("Test 10 - string: '%s', start: '%u', len: '%zu'\n", ptr019, start10, len10);
	printf("result: '%s'\n", ptr020);
	free(ptr020);
	printf("\n\n");

	// Test 11: Start is at the beginning, len is exactly the string length
	char	ptr021[] = {"Exact length"};
	char	*ptr022;
	unsigned int start11 = 0;
	size_t len11 = 12;

	ptr022 = ft_substr(ptr021, start11, len11);
	printf("Test 11 - string: '%s', start: '%u', len: '%zu' (exact length)\n", ptr021, start11, len11);
	printf("result: '%s'\n", ptr022);
	free(ptr022);
	printf("\n\n");

	// Test 12: malloc failure simulation (can't force, but we can check)
	char	ptr023[] = {"Test"};
	char	*ptr024;
	unsigned int start12 = 0;
	size_t len12 = 10;

	ptr024 = ft_substr(ptr023, start12, len12);
	printf("Test 12 - string: '%s', start: '%u', len: '%zu' (checking malloc)\n", ptr023, start12, len12);
	if (ptr024 == NULL)
		printf("result: NULL (malloc failed)\n");
	else
		printf("result: '%s'\n", ptr024);
	free(ptr024);
	printf("\n\n");

	printf("========== TESTS COMPLETE ==========\n");
	return (0);
}
