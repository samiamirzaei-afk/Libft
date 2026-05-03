/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:19:17 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/27 17:19:18 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		length;
	char	*copy;
	int		i;

	i = 0;
	length = ft_strlen(src);
	copy = malloc((length + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	copy[length] = '\0';
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 2)
	{
		printf("please only add one argument");
		return (1);
	}
	str = ft_strdup(argv[1]);
	printf("%s\n", str);
	free(str);
}
