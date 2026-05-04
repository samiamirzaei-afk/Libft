#include "libft.h"

void ft_lstdelone(t_list *list, void (*del)(void*))
{
	t_list	*temp;

	if (!list)
		return ;
	temp = list->next;
	del(list->content);
	free(list);
}
