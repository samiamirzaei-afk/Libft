/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:37:39 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/27 14:35:59 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_temp_fill(int *i, int *count, int *temp)
{
	long	resultl;

	resultl = *count;
	if (resultl < 0)
	{
		resultl *= -1;
		temp[*i] = '-';
		*i += 1;
	}
	while (resultl > 9)
	{
		temp[*i] = resultl % 10;
		resultl /= 10;
		*i += 1;
	}
	temp[*i] = resultl;
	*i += 1;
}

static void	ft_result_fill(char **result, int *temp, int i)
{
	int	j;

	j = 0;
	i = i - 1;
	if (temp[1] == '-')
	{
		(*result)[j] = '-';
		j++;
	}
	while (temp[i] != -1)
	{
		if (temp[i] == '-')
			break ;
		(*result)[j] = temp[i] + '0';
		i--;
		j++;
	}
}

char	*ft_itoa(int count)
{
	char	*result;
	int		temp[13];
	int		i;

	i = 1;
	temp[0] = -1;
	ft_temp_fill(&i, &count, temp);
	result = malloc((i) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[i - 1] = '\0';
	ft_result_fill(&result, temp, i);
	return (result);
}
/*
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*ptr001;
	int		num1;
	char	*ptr002;
	int		num2;
	char	*ptr003;
	int		num3;
	char	*ptr004;
	int		num4;
	char	*ptr005;
	int		num5;
	char	*ptr006;
	int		num6;
	char	*ptr007;
	int		num7;
	char	*ptr008;
	int		num8;
	char	*ptr009;
	int		num9;
	char	*ptr012;
	int		num12;
	char	*ptr013;
	int		num13;
	char	*ptr016;
	int		num16;
	char	*ptr017;
	int		num17;
	char	*ptr020;
	int		num20;

	// Test 7: Minimum int value (-2147483648)
	num7 = INT_MIN;
	printf("%d\n", num7);
	ptr007 = ft_itoa(num7);
	printf("Test 7 - input: '%d' (INT_MIN)\n", num7);
	printf("result: '%s'\n", ptr007);
	free(ptr007);
	printf("\n");
	// Test 1: Positive number
	num1 = 42;
	ptr001 = ft_itoa(num1);
	printf("Test 1 - input: '%d'\n", num1);
	printf("result: '%s'\n", ptr001);
	free(ptr001);
	printf("\n");
	// Test 2: Negative number
	num2 = -42;
	ptr002 = ft_itoa(num2);
	printf("Test 2 - input: '%d'\n", num2);
	printf("result: '%s'\n", ptr002);
	free(ptr002);
	printf("\n");
	// Test 3: Zero
	num3 = 0;
	ptr003 = ft_itoa(num3);
	printf("Test 3 - input: '%d'\n", num3);
	printf("result: '%s'\n", ptr003);
	free(ptr003);
	printf("\n");
	// Test 4: Single digit positive
	num4 = 5;
	ptr004 = ft_itoa(num4);
	printf("Test 4 - input: '%d'\n", num4);
	printf("result: '%s'\n", ptr004);
	free(ptr004);
	printf("\n");
	// Test 5: Single digit negative
	num5 = -9;
	ptr005 = ft_itoa(num5);
	printf("Test 5 - input: '%d'\n", num5);
	printf("result: '%s'\n", ptr005);
	free(ptr005);
	printf("\n");
	// Test 6: Maximum int value (2147483647)
	num6 = INT_MAX;
	ptr006 = ft_itoa(num6);
	printf("Test 6 - input: '%d' (INT_MAX)\n", num6);
	printf("result: '%s'\n", ptr006);
	free(ptr006);
	printf("\n");
	// Test 8: Large positive number
	num8 = 123456789;
	ptr008 = ft_itoa(num8);
	printf("Test 8 - input: '%d'\n", num8);
	printf("result: '%s'\n", ptr008);
	free(ptr008);
	printf("\n");
	// Test 9: Large negative number
	num9 = -987654321;
	ptr009 = ft_itoa(num9);
	printf("Test 9 - input: '%d'\n", num9);
	printf("result: '%s'\n", ptr009);
	free(ptr009);
	printf("\n");
	// Test 12: Number with all 9's
	num12 = 999999;
	ptr012 = ft_itoa(num12);
	printf("Test 12 - input: '%d'\n", num12);
	printf("result: '%s'\n", ptr012);
	free(ptr012);
	printf("\n");
	// Test 13: Negative number with all 9's
	num13 = -999999;
	ptr013 = ft_itoa(num13);
	printf("Test 13 - input: '%d'\n", num13);
	printf("result: '%s'\n", ptr013);
	free(ptr013);
	printf("\n");
	// Test 16: INT_MAX - 1
	num16 = INT_MAX - 1;
	ptr016 = ft_itoa(num16);
	printf("Test 16 - input: '%d'\n", num16);
	printf("result: '%s'\n", ptr016);
	free(ptr016);
	printf("\n");
	// Test 17: INT_MIN + 1
	num17 = INT_MIN + 1;
	ptr017 = ft_itoa(num17);
	printf("Test 17 - input: '%d'\n", num17);
	printf("result: '%s'\n", ptr017);
	free(ptr017);
	printf("\n");
	// Test 20: malloc failure simulation (can't force, but check)
	num20 = 12345;
	ptr020 = ft_itoa(num20);
	printf("Test 20 - input: '%d'\n", num20);
	if (ptr020 == NULL)
		printf("result: NULL \n");
	else
		printf("result: '%s'\n", ptr020);
	free(ptr020);
	return (0);
}
*/
