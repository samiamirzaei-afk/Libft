int ft_lstsize(t_list *list)
{
	int i;
	if (!list)
		return (0);

	t_list *ptr;
	i = 0;
	ptr = list;

	while(ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
