/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:42:21 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/29 16:57:52 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sep_check(const char *str, char sep)
{
	int	i;
	int	sep_count;

	i = 0;
	sep_count = 0;
	while (str[i])
	{
		while (str[i] == sep && str[i] != '\0')
			i++;
		if (str[i] == '\0')
			break ;
		sep_count++;
		while (str[i] != sep && str[i] != '\0')
			i++;
	}
	return (sep_count);
}

static int	sep_len(const char *str, char sep, int *i)
{
	int	len;

	len = 0;
	while (str[*i] && str[*i] != sep)
	{
		*i += 1;
		len++;
	}
	return (len);
}

static char	**ft_null_maker(char **str, int i)
{
	i = 0;
	while (str[i] != NULL )
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**malloc_maker(const char *str, char sep, char **result,
		int sep_count)
{
	int	i;
	int	k;
	int	len;

	len = 0;
	i = 0;
	k = 0;
	while (k < sep_count)
	{
		len = sep_len(str, sep, &i);
		result[k] = malloc((len + 1) * (sizeof(char)));
		if (result[k] == NULL)
			return (ft_null_maker(result, i));
		result[k][len] = '\0';
		result[k] = ft_memcpy(result[k], &str[i - len], len);
		while (str[i] && str[i] == sep)
			i++;
		k++;
	}
	return (result);
}

char	**ft_split(const char *str, char sep)
{
	int		i;
	int		sep_count;
	char	**result;

	if (!str)
		return (NULL);
	i = 0;
	sep_count = sep_check(str, sep);
	result = malloc((sep_count + 1) * sizeof(char *));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	result[sep_count] = NULL;
	i = 0;
	while (str[i] && str[i] == sep)
		i++;
	if (malloc_maker(&str[i], sep, result, sep_count) == NULL)
		return (NULL);
	return (result);
}

/*thanks for sasha for clean code idea*/

/*
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char    sep = 'a';
    char    str001[] = "abbbbbb";
    char    str002[] = "aaa";
    char    str003[] = "abab";
    char    str004[] = "bbbbbbaaaa";
char str005[] = "ababbababababababababababababababaabababa";
    char    str006[] = "1234567890-wertyuiop[sdfghjkl;'zxcvbnm,.";
    char    *str007 = NULL;
    char    str008[] = "\tbbanv,mav19874\t";
    
    char    **result001;
    char    **result002;
    char    **result003;
    char    **result004;
    char    **result005;
    char    **result006;
    char    **result007;
    char    **result008;
    
    int i;
    
    // Run ft_split on all test cases
    result001 = ft_split(str001, sep);
    result002 = ft_split(str002, sep);
    result003 = ft_split(str003, sep);
    result004 = ft_split(str004, sep);
    result005 = ft_split(str005, sep);
    result006 = ft_split(str006, sep);
    result007 = ft_split(str007, sep);
    result008 = ft_split(str008, sep);

    // Print all results
    printf("=== Test 1: str001 = \"abbbbbb\", sep = 'a' ===\n");
    for(i = 0; result001[i] != NULL; i++)
        printf("result001[%d]:'%s'\n", i, result001[i]);
    printf("\n\n");
    
    printf("=== Test 2: str002 = \"aaa\", sep = 'a' ===\n");
    for(i = 0; result002[i] != NULL; i++)
        printf("result002[%d]:'%s'\n", i, result002[i]);
    printf("\n\n");
    
    printf("=== Test 3: str003 = \"abab\", sep = 'a' ===\n");
    for(i = 0; result003[i] != NULL; i++)
        printf("result003[%d]:'%s'\n", i, result003[i]);
    printf("\n\n");
    
    printf("=== Test 4: str004 = \"bbbbbbaaaa\", sep = 'a' ===\n");
    for(i = 0; result004[i] != NULL; i++)
        printf("result004[%d]:'%s'\n", i, result004[i]);
    printf("\n\n");
    
    printf("=== Test 5: str005 (long string), sep = 'a' ===\n");
    for(i = 0; result005[i] != NULL; i++)
        printf("result005[%d]:'%s'\n", i, result005[i]);
    printf("\n\n");
    
    printf("=== Test 6: str006 (special chars), sep = 'a' ===\n");
    for(i = 0; result006[i] != NULL; i++)
        printf("result006[%d]:'%s'\n", i, result006[i]);
    printf("\n\n");
    
    printf("=== Test 7: str007 = NULL, sep = 'a' ===\n");
    if (result007 == NULL)
        printf("result007: NULL (expected for NULL input)\n");
    else
    {
        for(i = 0; result007[i] != NULL; i++)
            printf("result007[%d]:'%s'\n", i, result007[i]);
    }
    printf("\n\n");
    
    printf("=== Test 8: str008 = \"\\tbbanv,mav19874\\t\", sep = 'a' ===\n");
    for(i = 0; result008[i] != NULL; i++)
        printf("result008[%d]:'%s'\n", i, result008[i]);
    printf("\n\n");

    // Free all allocated memory
    i = 0;
    if(result001)
    {
        while(result001[i] != NULL)
            free(result001[i++]);
        free(result001);
    }
    
    i = 0;
    if(result002)
    {
        while(result002[i] != NULL)
            free(result002[i++]);
        free(result002);
    }
    
    i = 0;
    if(result003)
    {
        while(result003[i] != NULL)
            free(result003[i++]);
        free(result003);
    }
    
    i = 0;
    if(result004)
    {
        while(result004[i] != NULL)
            free(result004[i++]);
        free(result004);
    }
    
    i = 0;
    if(result005)
    {
        while(result005[i] != NULL)
            free(result005[i++]);
        free(result005);
    }
    
    i = 0;
    if(result006)
    {
        while(result006[i] != NULL)
            free(result006[i++]);
        free(result006);
    }
    
    i = 0;
    if(result007)
    {
        while(result007[i] != NULL)
            free(result007[i++]);
        free(result007);
    }
    
    i = 0;
    if(result008)
    {
        while(result008[i] != NULL)
            free(result008[i++]);
        free(result008);
    }
    
    return 0;

}
*/
