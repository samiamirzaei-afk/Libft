#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new_node;


	new_node = malloc(sizeof(t_list));
	if(!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;

	return(new_node);
}

/*
int	main()
{

	t_list *link1;
	t_list *link2;
	t_list *link3;
	char str1[] = "The ";
	char str2[] = "number ";
	char str3[] = "42";

	link1 = ft_lstnew(str1);
	if (!link1)
		return(0);
	link2 = ft_lstnew(str2);
	if (!link2)
		return(0);
	link3 = ft_lstnew(str3);
	if (!link3)
		return(0);

	link1->next = link2;
	link2->next = link3;


	printf("full text: '%s", (char*)(link1->content));
	printf("%s", (char*)(link1->next->content));
	printf("%s'\n", (char*)(link1->next->next->content));
	if (!link)
		return(0);
}
*/
