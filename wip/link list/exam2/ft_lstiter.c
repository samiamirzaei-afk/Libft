#include "libft.h"

void ft_lstiter(t_list *list, void (*f)(void *))
{
	if(!list)
		return ;
	while (list != NULL)
	{
		f(list->content);
		list = list->next;
	}
}
/*
void	f(void *content)
{
	while(content)
	{
		content = '0';
		content += 1;
	}
}
*/
