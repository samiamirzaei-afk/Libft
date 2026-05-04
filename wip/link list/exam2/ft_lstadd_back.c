#include "libft.h"

void ft_lstadd_back(t_list **head, t_list *new)
{
	t_list	*ptr;
	if(!head || !new)
		return ;
	if(*head == NULL)
	{
		*head = new;
		return ;
	}
	ptr = *head;
	while(ptr->next != NULL)
		*head = ptr->next;
	new = ptr->next;
}
