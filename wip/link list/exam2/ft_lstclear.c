#include "libft.h"

void ft_lstclear(t_list **head, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*ptr2;

	if (!head || !del)
		return ;
	ptr = *head;
	while(ptr != NULL)
	{
		ptr2 = ptr;
		ptr = ptr->next;
		if(ptr2->content)
			del(ptr2->content);
		free(ptr2);
	}
	*head = NULL;
}
