#include "libft.h"

void ft_lstiter(t_list *list, void (*f)(void *))
{
	if(!list)
		return ;
	while (list != NULL)
	{
		f(list->next);
		list = list->next;
	}
}
