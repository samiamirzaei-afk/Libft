#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

/*typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;*/



void ft_lstadd_front(t_list **list, t_list *new)
{
	if(!list || !new)
		return ;
	
	new->next = *list;
	*list = new;
}


/*t_list *ft_lstnew(void *content)
{
	t_list *new_node;


	new_node = malloc(sizeof(t_list));
	if(!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;

	return(new_node);
}*/

/*int main()
{
	t_list *list01;
	t_list *list02;
	t_list *list03;
	t_list *list04;
	t_list *list05;
	t_list *list06;
	t_list *list07;
	t_list *ptr;
		

	list01= malloc(sizeof(t_list));
	list02= malloc(sizeof(t_list));
	list03= malloc(sizeof(t_list));
	list04= malloc(sizeof(t_list));
	list05= malloc(sizeof(t_list));
	list06= malloc(sizeof(t_list));
	list07= malloc(sizeof(t_list));
	
	char str1[] = "A";
	char str2[] = "B";
	char str3[] = "C";
	char str4[] = "D";
	char str5[] = "E";
	char str6[] = "F";	
	char str7[] = "G";
	
	list01 = ft_lstnew(str1);
	if (!list01)
		return(0);
		list02 = ft_lstnew(str2);
	if (!list02)
		return(0);
		list03 = ft_lstnew(str3);
	if (!list03)
		return(0);
		list04 = ft_lstnew(str4);
	if (!list04)
		return(0);
		list05 = ft_lstnew(str5);
	if (!list05)
		return(0);
		list06 = ft_lstnew(str6);
	if (!list06)
		return(0);
	list07 = ft_lstnew(str7);
	if (!list07)
		return(0);
	
	list01->next = list02;
	list02->next = list03;
	list03->next = list04;
	list04->next = list05;
	list05->next = list06;
	list06->next = NULL;
	list07->next = NULL;

	ft_lstadd_front(&list01, list07);
		ptr = list01;
	while(ptr)
	{ 
		printf("%s", (char*)(ptr->content));
		ptr = ptr->next;
	}
printf("\n");
}*/
