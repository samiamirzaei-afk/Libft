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

void ft_lstadd_front( t_list **list, t_list *new)
{
	if(!list || !new)
		return ;
	new->next = *list;
	return ;
}

/*	v1
int ft_lstsize(t_list *list)
{
	int i;
	void	*ptr;
	
	if(!list)
		return(-1);
	i = 0;
	ptr = list;
	while(ptr != NULL)
	{
		ptr = list->next;
		i++;
	}

	return (i);
}
*/

int ft_lstsize(t_list *list)
{
	int i;
	t_list	*ptr;
	
	if(!list)
		return(-1);
	i = 0;
	ptr = list;
	while(ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}

t_list *ft_lstlast(t_list *list)
{
	t_list *ptr;
	
	if(!list)
		return(-1);
	ptr = list;
	while(ptr->next != NULL)
		ptr = ptr->next;
	return(ptr);
}


void ft_lstadd_back(t_list **list, t_list *new)
{



}

int	main()
{
	t_list *link01;
	t_list *link02;
	t_list *link03;
	t_list *link04;
	t_list *link05;
	t_list *link06;
	t_list *ptr;
	char str01[] = "The ";
	char str02[] = "unlimate ";
	char str03[] = "answer? ";
	char str04[] = "The ";
	char str05[] = "number ";
	char str06[] = "42,";

	link01 = ft_lstnew(str01);
	if (!link01)
		return(0);
	link02 = ft_lstnew(str02);
	if (!link02)
		return(0);
	link03 = ft_lstnew(str03);
	if (!link03)
		return(0);
	link04 = ft_lstnew(str04);
	if (!link04)
		return(0);
	link05 = ft_lstnew(str05);
	if (!link05)
		return(0);
	link06 = ft_lstnew(str06);
	if (!link06)
		return(0);

	link01->next = link02;
	link02->next = link03;
	link03->next = link04;
	link04->next = link05;
	link05->next = link06;

	printf("%s", (char*)(link01->content));
	printf("%s", (char*)(link01->next->content));
	printf("%s", (char*)(link01->next->next->content));
	printf("%s", (char*)(link01->next->next->next->content));
	printf("%s", (char*)(link01->next->next->next->next->content));
	printf("%s\n", (char*)(link01->next->next->next->next->next->content));
	
	ft_lstadd_back( &, t_list *new)

	
}




/* for ft_lstlast
int	main()
{
	t_list *link01;
	t_list *link02;
	t_list *link03;
	t_list *link04;
	t_list *link05;
	t_list *link06;
	t_list *ptr;
	char str01[] = "The ";
	char str02[] = "number ";
	char str03[] = "42";
	char str04[] = "The ";
	char str05[] = "unlimate ";
	char str06[] = "answer? ";

	link01 = ft_lstnew(str01);
	if (!link01)
		return(0);
	link02 = ft_lstnew(str02);
	if (!link02)
		return(0);
	link03 = ft_lstnew(str03);
	if (!link03)
		return(0);
	link04 = ft_lstnew(str04);
	if (!link04)
		return(0);
	link05 = ft_lstnew(str05);
	if (!link05)
		return(0);
	link06 = ft_lstnew(str06);
	if (!link06)
		return(0);

	link01->next = link02;
	link02->next = link03;

	ft_lstadd_front(&link01, link06);
	ft_lstadd_front(&link06, link05);
	ft_lstadd_front(&link05, link04);

	int i;

	ptr = ft_lstlast(link04);

	printf("last list:'%s'\n", (char *)ptr->content);
}
*/


/* for lstsize
int	main()
{

	t_list *link01;
	t_list *link02;
	t_list *link03;
	t_list *link04;
	t_list *link05;
	t_list *link06;
	char str01[] = "The ";
	char str02[] = "number ";
	char str03[] = "42";
	char str04[] = "The ";
	char str05[] = "unlimate ";
	char str06[] = "answer? ";

	link01 = ft_lstnew(str01);
	if (!link01)
		return(0);
	link02 = ft_lstnew(str02);
	if (!link02)
		return(0);
	link03 = ft_lstnew(str03);
	if (!link03)
		return(0);
	link04 = ft_lstnew(str04);
	if (!link04)
		return(0);
	link05 = ft_lstnew(str05);
	if (!link05)
		return(0);
	link06 = ft_lstnew(str06);
	if (!link06)
		return(0);

	link01->next = link02;
	link02->next = link03;

	ft_lstadd_front(&link01, link06);
	ft_lstadd_front(&link06, link05);
	ft_lstadd_front(&link05, link04);

	int i;

	i = ft_lstsize(link04);

	printf("full size:'%d'\n", i);
}
*/


/*	for lstadd_front
int	main()
{

	t_list *link01;
	t_list *link02;
	t_list *link03;
	t_list *link04;
	t_list *link05;
	t_list *link06;
	char str01[] = "The ";
	char str02[] = "number ";
	char str03[] = "42";
	char str04[] = "The ";
	char str05[] = "unlimate ";
	char str06[] = "answer? ";

	link01 = ft_lstnew(str01);
	if (!link01)
		return(0);
	link02 = ft_lstnew(str02);
	if (!link02)
		return(0);
	link03 = ft_lstnew(str03);
	if (!link03)
		return(0);
	link04 = ft_lstnew(str04);
	if (!link04)
		return(0);
	link05 = ft_lstnew(str05);
	if (!link05)
		return(0);
	link06 = ft_lstnew(str06);
	if (!link06)
		return(0);

	link01->next = link02;
	link02->next = link03;

	ft_lstadd_front(&link01, link06);
	ft_lstadd_front(&link06, link05);
	ft_lstadd_front(&link05, link04);


	printf("full text:'");
	printf("%s", (char*)(link04->content));
	printf("%s", (char*)(link04->next->content));
	printf("%s", (char*)(link04->next->next->content));
	printf("%s", (char*)(link04->next->next->next->content));
	printf("%s", (char*)(link04->next->next->next->next->content));
	printf("%s'\n", (char*)(link04->next->next->next->next->next->content));
}
*/



/* for ft_lstnew
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
