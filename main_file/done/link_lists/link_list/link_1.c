#include <stdio.h>
#include <stdlib.h>




typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if(!new)
		return(NULL);
	new->content = content;
	return(new);
}

int main(void)
{
    int number = 42;
    t_list *node;

    // Create a new node
    node = ft_lstnew(&number);

    // Check if it worked
    if (node != NULL)
    {
        printf("Success!\n");
        printf("Content: %d\n", *(int *)node->content);
        printf("Next: %p (should be (nil))\n", node->next);
    }
    else
    {
        printf("Failed!\n");
    }

    // Don't forget to free
    free(node);
    return (0);
}
