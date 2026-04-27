/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:42:21 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/27 17:17:43 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

static char	**ft_null_maker(char **str, int len, int i)
{
	i = 0;
	while (i < len)
	{
		str[i] = NULL;
		i++;
	}
	str = NULL;
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
			return (ft_null_maker(result, k, i));
		result[k][len] = '\0';
		result[k] = memcpy(result[k], &str[i - len], len);
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

/*thanks for shash for clean code idea*/
/*
	printf("sep_count: '%d'\n", sep_count);
	for (i = 0; result[i] != NULL; i++)
	{
		printf("result[%d]: '%s'\n", i, result[i]);
	}
*/
/*
static int	sep_check(const char *str, char sep)
{
	int	i;
	int	sep_count;

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
