/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:07:08 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/29 11:24:18 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*next_node;

	next_node = ft_calloc(1 * sizeof(t_list));
	if (!next_node)
		return (NULL);
	next_node->content = content;
	return (next_node);
}
