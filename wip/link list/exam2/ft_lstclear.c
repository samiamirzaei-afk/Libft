#include "libft.h"

void ft_lstclear(t_list **head, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*ptr2;

	if (!head)
		return ;
	ptr = *head;
	while(ptr != NULL)
	{
		ptr2 = ptr;
		ptr = ptr->next;
		del(ptr->content);
		free(*head);
		*head = ptr;
	}

}
