#include "libft.h"

void ft_lstadd_back(t_list **head, t_list *new)
{
	if(!head && !new)
		return ;
	if(!head && new)
		new = *head;
	while(head->next != null)
		*head = head->next;
	new = head->next;
}
