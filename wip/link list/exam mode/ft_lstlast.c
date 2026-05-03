t_list *ft_lstlast(t_list *list)
{
	t_list *ptr;

	if (!list)
		return (NULL);
	ptr = list;
	while(ptr->next)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
