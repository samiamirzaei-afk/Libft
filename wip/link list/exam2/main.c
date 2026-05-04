#include "libft.h"

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



	link01->next = link02;
	link02->next = link03;
	link03->next = link04;
	link04->next = link05;
	link05->next = link06;
	link06->next = link07;
	link07->next = link08;
	link08->next = link09;
	link09->next = NULL;


	printf("full text: '%s ", (char*)(link01->content));
	printf("%s ", 	(char*)(link01->next->content));
	printf("%s ", 	(char*)(link01->next->next->content));
	printf("%s ", 	(char*)(link01->next->next->next->content));
	printf("%s ", 	(char*)(link01->next->next->next->next->content));
	printf("%s ", 	(char*)(link01->next->next->next->next->next->content));
	printf("%s ", 	(char*)(link01->next->next->next->next->next->next->content));
	printf("%s ", 	(char*)(link01->next->next->next->next->next->next->next->content));
	printf("%s'\n\n", (char*)(link01->next->next->next->next->next->next->next->next->content));
	
	
	printf("after lstadd_front:\n");
	ft_lstadd_front(&link01,  link09);



	t_list *current = link01;
	for (i = 0; current != NULL && i < 20; i++)
	{
  	 printf("%s", (char*)current->content);
   	 current = current->next;
	}
	printf("\n\n");



	printf("after lstadd_back:\n");
	ft_lstadd_front(&link09,  link01);
	

	current = link09;
	for (i = 0; current != NULL && i < 30; i++)
	{
  	 printf("%s", (char*)current->content);
   	 current = current->next;
	}
	printf("\n");
}
