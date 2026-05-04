void ft_lstclear(t_list **head, void (*del)(void*))
{
	t_list	*ptr;
	if (!head)
		return ;
	while(*head != NULL)
	{
		ptr = head-next;
		del(*head->content)
		free(*head);
		*head = ptr;
	}

}
