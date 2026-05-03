void ft_lstadd_back(t_list **head, t_list *new)
{
	t_list	*ptr;

	if(!head || !new)
		return ;
	if (*head == NULL)
		*head = new;
	ptr = *head;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
}
