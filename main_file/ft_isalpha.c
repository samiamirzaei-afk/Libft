/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 12:06:38 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/20 12:38:36 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_isalpha(int number)
{
	if (number >= 'A' && number <= 'z')
	{
		if (!(number >= '[' && number <= '`'))
			return (1);
	}
	return (0);
}

/* should pick only letters, big or small */

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
	{
		printf("please provide an argument");
		return (1);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		printf("%c = %d\n", argv[1][i], ft_isalpha(argv[1][i]));
		i++;
	}
}
