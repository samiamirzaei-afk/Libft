/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:12:49 by ammirzae          #+#    #+#             */
/*   Updated: 2026/05/06 10:59:38 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int num)
{
	int	str_length;

	str_length = ft_strlen(str);
	if (num == 0)
		return ((char *)&str[str_length]);
	while (str_length >= 0)
	{
		if (str[str_length] == (unsigned char)num)
			return ((char *)&str[str_length]);
		str_length--;
	}
	return (NULL);
}
/*
int main()
{
    char    *str001 = NULL;
    char    *str002 = NULL;
    char    *str003 = NULL;
    char    *str004 = NULL;
    char    *str005 = NULL;
    char    *str006 = NULL;
    char    *str007 = NULL;
    char    *str008 = NULL;
    char    *str009 = NULL;
    char    *str010 = NULL;
    char    *result;


    result = strrchr(str001, 44);
    return(0);
    result = strrchr(str002, 10);
    result = strrchr(str003, 4);
    result = strrchr(str004, 14);
    result = strrchr(str005, 10);
    result = strrchr(str006, 0);
    result = strrchr(str007, 11);
    result = strrchr(str008, 23);
    result = strrchr(str009, -1);
}
*/
