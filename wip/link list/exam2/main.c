#include "libft.h"

void del(void *content)
{
    free(content);
}
void	f(void *content)
{
	char *i;
	i = (char*)content;
		*i = '0';
		i += 1;	
		*i = '-';
}
int	main()
{
	t_list *link01;
	t_list *link02;
	t_list *link03;
	t_list *link04;
	t_list *link05;
	t_list *link06;
	t_list *link07;
	t_list *link08;
	t_list *link09;
	t_list *link10;
	t_list *link11;
	t_list *link12;
	t_list *link13;
	t_list *head;

	int i;
	char str01[] = "1-";
	char str02[] = "2-";
	char str03[] = "3-";
	char str04[] = "4-";
	char str05[] = "5-";
	char str06[] = "6-";
	char str07[] = "7-";
	char str08[] = "8-";
	char str09[] = "9-";
	char str10[] = "10-";
	char str11[] = "11-";
	char str12[] = "12-";
	char *str13;

		if ((str13 = malloc((3+1) * sizeof(char))) == NULL)
			return (0);
		str13[0] = '1';
		str13[1] = '3';
		str13[2] = '-';
		str13[3] = '\0';

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
	link07 = ft_lstnew(str07);
	if (!link07)
		return(0);
	link08 = ft_lstnew(str08);
	if (!link08)
		return(0);
	link09 = ft_lstnew(str09);
	if (!link09)
		return(0);
	link10 = ft_lstnew(str10);
	if (!link10)
		return(0);
	link11 = ft_lstnew(str11);
	if (!link11)
		return(0);
	link12 = ft_lstnew(str12);
	if (!link12)
		return(0);
	link13 = ft_lstnew(str13);
	if (!link13)
		return(0);
	link01->next = link02;
	link02->next = link03;
	link03->next = link04;
	link04->next = link05;
	link05->next = link06;
	link06->next = link07;
	link07->next = link08;
	link08->next = link09;
	link09->next = NULL;
	link10->next = NULL;
	link11->next = NULL;
	link12->next = NULL;
	link13->next = NULL;
	

	printf("full text: '%s", (char*)(link01->content));
	printf("%s", 	(char*)(link01->next->content));
	printf("%s", 	(char*)(link01->next->next->content));
	printf("%s", 	(char*)(link01->next->next->next->content));
	printf("%s", 	(char*)(link01->next->next->next->next->content));
	printf("%s", 	(char*)(link01->next->next->next->next->next->content));
	printf("%s", 	(char*)(link01->next->next->next->next->next->next->content));
	printf("%s", 	(char*)(link01->next->next->next->next->next->next->next->content));
	printf("%s'\n\n", (char*)(link01->next->next->next->next->next->next->next->next->content));
	
	
	printf("===after lstadd_front===  'link10' \n");
	head = link01;
	ft_lstadd_front(&head,  link10);

	for (i = 0; head != NULL && i < 20; i++)
	{
  	 printf("%s", (char*)head->content);
   	 head = head->next;
	}
	printf("\n\n");

	head = link10;

	printf("===after lstadd_back=== 'link 13'\n");
	ft_lstadd_back(&head, link13);
	
	head = link10;

	for (i = 0; head != NULL && i < 30; i++)
	{
  	 printf("%s", (char*)head->content);
   	 head = head->next;
	}
	printf("\n\n");


	printf("===after lstsize=== 'from link10'\n");

	int k;
	 k = ft_lstsize(link10);
	printf("size: %d\n",k);


	head = link10;
	printf("===ft_lstdelone=== 'link 13'\n");
	ft_lstdelone(link13, del);
	link09->next = NULL;

  	 printf("TRUST ME BRO");
	printf("\n\n");
	head = link10;
	printf("===ft_lstlast=== 'link 13'\n");
	head = ft_lstlast(head);
	printf("current list: %s\n",(char *)head->content);
	
	printf("\n\n");
	head = link10;
	printf("===ft_lstiter=== 'link 05'\n");
	ft_lstiter(link05, f);

	for (i = 0; head != NULL && i < 13; i++)
	{
  	 printf("%s", (char*)head->content);
   	 head = head->next;
	}
	printf("\n\n");

	printf("===ft_lstclear=== 'link 05'\n");
	head = link05;
	ft_lstclear(&head, del);

}
