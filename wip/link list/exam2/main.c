#include "libft.h"
#include <string.h>

void del(void *content)
{
    free(content);
}
void	ft_f(void *content)
{
	char *i;
	i = (char*)content;
		*i = '0';
		i += 1;	
		*i = '-';
}
void	*ft_f2(void *content)
{
	char *ptr;
	char *str;
	int i;
	int k;

	i = 0;
	ptr = (char*)content;
	while(ptr[i])
		i++;
	if((str = malloc((i + 1 + 3) * sizeof(char))))
		return (NULL);
	str[0] = 'C';
	str[1] = 'P';
	str[2] = 'Y';
	k = 3;
	while(ptr[i])
	{
		str[k] = ptr[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return(str);

}
char	*str_malloc()
{
	char *str;
	if ((str = malloc((4+1) * sizeof(char))) == NULL)
		return (0);
	return(str);
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
	char *str05;
	char *str06;
	char *str07;
	char *str08;
	char *str09;
	char *str10;
	char *str11;
	char *str12;
	char *str13;

	str05 = str_malloc();
	str06 = str_malloc();
	str07 = str_malloc();
	str08 = str_malloc();
	str09 = str_malloc();
	str10 = str_malloc();
	str11 = str_malloc();
	str12 = str_malloc();
	str13 = str_malloc();

	str05 = strcpy(str05, "5-");
	str06 = strcpy(str06, "6-");
	str07 = strcpy(str07, "7-");
	str08 = strcpy(str08, "8-");
	str09 = strcpy(str09, "9-");
	str10 = strcpy(str10, "10-");
	str11 = strcpy(str11, "11-");
	str12 = strcpy(str12, "12-");
	str13 = strcpy(str13, "13-");



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
printf("%s", (char*)(link01->next->next->next->next->next->content));
printf("%s", (char*)(link01->next->next->next->next->next->next->content));
printf("%s", (char*)(link01->next->next->next->next->next->next->next->content));
printf("%s'\n\n", (char*)(link01->next->next->next->next->next->next->next
			->next->content));
	
	
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
	printf("size: %d\n\n",k);
	head = link10;


	printf("===ft_lstdelone=== 'link 13'\n");
	ft_lstdelone(link13, del);
	link09->next = NULL;
	for (i = 0; head != NULL && i < 13; i++)
	{
  	 printf("%s", (char*)head->content);
   	 head = head->next;
	}
	printf("\n\n");
	head = link10;


	printf("===ft_lstlast=== 'link 10'\n");
	head = ft_lstlast(head);
	printf("current list: %s\n",(char *)head->content);
	printf("\n\n");
	head = link10;


	printf("===ft_lstiter=== 'link 05'\n");
	ft_lstiter(link05, ft_f);
	for (i = 0; head != NULL && i < 13; i++)
	{
  	 printf("%s", (char*)head->content);
   	 head = head->next;
	}
	printf("\n\n");


	printf("===ft_lstclear=== 'link 07'\n");
	head = link07;
	ft_lstclear(&head, del);
	head = link10;
	link06->next = NULL;
	for (i = 0; head && i < 10; i++)
	{
  	 printf("%s",(char*)head->content);
   	 head = head->next;
	}

	printf("\n\n");

	printf("===ft_lstclear=== 'link 05'\n");

	head = link05;
	link11 = ft_lstmap(link05, ft_f2, del);
	link04->next = NULL;	
	
	head = link10;
//	link10->next = NULL;
	for (i = 0; head && i < 6; i++)
	{
  	 printf("%s",(char*)head->content);
   	 head = head->next;
	}
	printf("\n");
	head = link11;
	for (i = 0; head && i < 6; i++)
	{
  	 printf("%s",(char*)head->content);
   	 head = head->next;
	}
}
