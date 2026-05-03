#include "libft.h"

/*t_list *ft_lstnew(void *content);*/

void ft_lstdelone(t_list *trash, void (*del)(void*))
{
	if (!trash)
		return ;
	(del)(&trash->content);
	free(trash);
//	(del)(trash);
}

/*void	del(void *trash)
{
	free(trash);
}*/

/*int	main()
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

	ft_lstdelone(link2,&del);

	printf("full text: '%s", (char*)(link1->content));
//	printf("%s", (char*)(link1->next->content));
	printf("%s'\n", (char*)(link1->next->next->content));
}*/
