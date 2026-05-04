#include "libft.h"

int ft_lstsize(t_list *list)
{
	size_t	i;

	if(!list)
		return (0);
	i = 0;
	while(list)
	{
		list = list->next;
		i++;
	}
	return (i);
}
