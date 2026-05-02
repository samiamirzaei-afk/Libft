#include "libft.h"

int	ft_lstsize(t_list *list)
{
	int i;
	t_list *ptr;

	ptr = list;
	i = 0;
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
		i++;
	}
}

int main()
{
	t_list *list01 = malloc(sizeof(t_list));
	t_list *list02 = malloc(sizeof(t_list));
	t_list *list03 = malloc(sizeof(t_list));
	t_list *list04 = malloc(sizeof(t_list));
	t_list *list05 = malloc(sizeof(t_list));
	t_list *list06 = malloc(sizeof(t_list));


	list01->next = list02;
	list02->next = list03;
	list03->next = list04;
	list04->next = list05;
	list05->next = list06;
	list05->next = NULL;

	return(ft_lstsize(list01));
}
