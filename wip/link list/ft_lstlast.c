/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 16:51:34 by ammirzae          #+#    #+#             */
/*   Updated: 2026/05/02 17:23:12 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *list)
{
	t_list	*ptr;

	if (!list)
		return (NULL);
	ptr = list;
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}
/*
int	main(void)
{
	t_list	*link01;
	t_list	*link02;
	t_list	*link03;
	t_list	*link04;
	t_list	*link05;
	t_list	*link06;
	t_list	*ptr;
	char	str01[] = "The ";
	char	str02[] = "number ";
	char	str03[] = "42";
	char	str04[] = "The ";
	char	str05[] = "unlimate ";
	char	str06[] = "answer? ";

	link01 = ft_lstnew(str01);
	if (!link01)
		return (0);
	link02 = ft_lstnew(str02);
	if (!link02)
		return (0);
	link03 = ft_lstnew(str03);
	if (!link03)
		return (0);
	link04 = ft_lstnew(str04);
	if (!link04)
		return (0);
	link05 = ft_lstnew(str05);
	if (!link05)
		return (0);
	link06 = ft_lstnew(str06);
	if (!link06)
		return (0);
	link01->next = link02;
	link02->next = link03;
	link03->next = link04;
	link04->next = link05;
	link05->next = link06;
	ptr = ft_lstlast(link01);
	printf("last list:'%s'\n", (char *)ptr->content);
}
*/
