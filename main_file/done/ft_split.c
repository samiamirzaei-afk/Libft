/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:42:21 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/25 13:28:17 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int sep_check(const char *str, char sep)
{
	int i;
	int sep_count;
	
	i = 0;
	sep_count = 0;
	if(str[i] != sep)
		sep_count++;
	while(str[i] == sep && str[i] != '\0')
		i++;
	while(str[i])
	{
		if(str[i] == sep && str[i] != '\0')
		{
			while(str[i] == sep && str[i] != '\0')
				i++;
			if(str[i])
				sep_count++;
		}
		if(str[i])	
			i++;
	}
	return(sep_count);
}

static char	*malloc_maker(const char *str, char sep, int *i)
{
	int sub_length;
	char *result;
	int k;

	k = 0;
	sub_length = 0;
	while (str[*i] != sep && str[*i] != '\0')
	{
		sub_length++;
		*i += 1;
	}
	result = malloc((sub_length + 1) * sizeof(char));
	if(result == NULL)
		return(NULL);
	result[sub_length] = '\0';
	*i -= sub_length;
	while(k < sub_length)
	{
		result[k] = str[*i];
		k++;
		*i += 1;
	} 
	return (result);

}

char	**ft_split(const char *str, char sep)
{
	int i;
	int sep_count;
	char **result;
	int k;
	
	i = 0;
	sep_count = sep_check(str, sep);
	result = malloc((sep_count + 1) * sizeof(char*));
	if(result == NULL)
		return (NULL);	
	result[sep_count] = NULL;
	i = 0;
	k = 0;
	if(sep_count != sep)
		i++;
	while(i < sep_count)
	{
		result[k] = malloc_maker(str, sep, &i);
		if(result[k] == NULL)
			return (NULL);
//			ft_NULL_maker. 	
		i++;
		k++;
	}
	printf("sep_count: '%d'\n", sep_count);
	for(i = 0; result[i] != NULL; i++)
	{
		printf("result[%d]: '%s'\n", i, result[i]);
	
	}

	return(result);
}
// this version is wrong because if "baaaba" is given, it will make 3 arrays, its adding the last a's before '\0'
int     main(void)
{
	char	sep = 'a'; 
	char	str001[] = "abbbbbb";
	char	str002[] = "aaa";
	char	str003[] = "aaaaaaaa";
	char	str004[] = "abab";
	char	str005[] = "aaaaabaaaab";

	char	str006[] = "bab";
	char	str007[] = "baaaaab";
	char	str008[] = "aabaaab";
	char	str009[] = "b";
	char	str010[] = "ba";
	char	str011[] = "aba";

	printf("str001:'%s'\n", str001);
	ft_split(str001, sep);
	printf("\n\n");

	printf("str002:'%s'\n", str002);
	ft_split(str002, sep);
	printf("\n\n");

	printf("str003:'%s'\n", str003);
	ft_split(str003, sep);
	printf("\n\n");

	printf("str004:'%s'\n", str004);
	ft_split(str004, sep);
	printf("\n\n");

	printf("str005:'%s'\n", str005);
	ft_split(str005, sep);
	printf("\n\n");


	printf("str006:'%s'\n", str006);
	ft_split(str006, sep);
	printf("\n\n");

	printf("str007:'%s'\n", str007);
	ft_split(str007, sep);
	printf("\n\n");

	printf("str008:'%s'\n", str008);
	ft_split(str008, sep);
	printf("\n\n");

	printf("str009:'%s'\n", str009);
	ft_split(str009, sep);
	printf("\n\n");

	printf("str010:'%s'\n", str010);
	ft_split(str010, sep);
	printf("\n\n");


	printf("str011:'%s'\n", str011);
	ft_split(str011, sep);
	printf("\n\n");
}

/*thanks for shash for clean code idea*/
/*
 while (str[i])
    {
        if(memchr(&str[i], sep, 1) != NULL && str[i] != '\0')
        {
            while(memchr(&str[i], sep, 1) != NULL && str[i] != '\0')
                i++;
            if(str[i] != '\0')
                sep_count++;
        }
        i++;
    }
*/


/*static int sep_check(const char *str, char sep, int *i)
{
	while (str[*i])
    	{
        	if(str[*i] == sep && str[*i] != '\0')
        	{
           	 while(str[*i] == sep && str[*i] != '\0')
           	     *i += 1;
			 if(str[*i] != '\0')
           	     return(1);
        	}
	 if(str[*i] != '\0')
		 *i += 1;
}
	return(0);
}*/
