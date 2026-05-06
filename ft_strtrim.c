/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 07:15:51 by ammirzae          #+#    #+#             */
/*   Updated: 2026/05/06 17:21:10 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_needle_check(char hey, const char *needles)
{
	int	i;

	i = 0;
	while (needles[i])
	{
		if (hey == needles[i])
			return (1);
		i++;
	}
	return (-1);
}

static void	ft_index_fill(const char *hey, const char *needles, size_t *index,
		size_t *i)
{
	size_t	needle_count;
	int		start;

	start = -1;
	index[1] = 0;
	index[0] = 0;
	while (hey[*i])
	{
		needle_count = 0;
		while ((hey[*i] && (ft_needle_check(hey[*i], needles) == 1)))
		{
			*i += 1;
			needle_count++;
		}
		if (start == -1)
		{
			index[0] = (needle_count);
			start = 1;
		}
		if (hey[*i] == '\0')
			index[1] = (needle_count);
		while (hey[*i] && (ft_needle_check(hey[*i], needles) == -1))
			*i += 1;
	}
}

char	*ft_strtrim(const char *hey, const char *needles)
{
	size_t	i;
	size_t	index[2];
	char	*result;
	size_t	result_len;
	size_t	k;

	if (!hey || !needles)
		return (NULL);
	i = 0;
	ft_index_fill(hey, needles, index, &i);
	if (i < (index[0] + index[1]))
		result_len = 0;
	else
		result_len = i - (index[0] + index[1]);
	result = malloc((result_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[result_len] = '\0';
	i = index[0];
	k = 0;
	while (k < result_len)
		result[k++] = hey[i++];
	return (result);
}
/*
int	main()
{
	char	sep03[] = "ab";
	char	str000[] = "aaaaaabbaahellabo alljbabab";
	char	*result;

	result = ft_strtrim(str000, sep03);
	printf("str1:'%s' sep:'%s'\n", str000, sep03);
	printf("result: '%s'\n\n", result);
	free(result);


	char	*sep01 = (void*)0;	
	char	sep02[] = "ll";
	char	str001[] = "llhello world I am a computerll";

	result = ft_strtrim(str001, sep01);
	printf("str1:'%s' sep:'%s'\n", str001, sep01);
	printf("result: '%s'\n\n", result);
	free(result);

	
	result = ft_strtrim(str001, sep02);
	printf("str1:'%s' sep:'%s'\n", str001, sep02);
	printf("result: '%s'\n\n", result);
	free(result);
	
	
char str002[]="Hast du etwas Zeit für mich? Denkst du vielleicht grad an mich?";
	char	str003[] = "H?ac";
	result = ft_strtrim(str002, str003);
	printf("str1:'%s' sep:'%s'\n", str002, str003);
	printf("result: '%s'\n\n", result);
	free(result);



char str004[]="   xxx   xxx";
	char	str005[] = " x";
	result = ft_strtrim(str004, str005);
	printf("str1:'%s' sep:'%s'\n", str004, str005);
	printf("result: '%s'\n\n", result);
	free(result);




}
*/
