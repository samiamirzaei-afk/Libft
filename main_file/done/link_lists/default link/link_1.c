/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 10:25:47 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/30 13:23:25 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

struct s_list
{
void *content;
struct s_list *next;
};

(struct s_list) *ft_lstnew(void *content)
{
	struct s_list *new_node;

	new_node = malloc(sizeof((struct s_list)));

	new_node.content = content;


}

/*
int main()
{
	
 struct s_list *new_node;

new_node = malloc(sizeof(struct s_list));

	new_node->content = malloc(3 * sizeof(char));
	((char*)new_node->content)[0] = 'h';
	((char*)new_node->content)[1] = 'i';
	((char*)new_node->content)[2] = '\0';

printf("result: '%s'\n", (char*)new_node->content);


	struct.new_node = malloc(sizeof(struct.s_list);
	
	struct.new_node.content = g;

	struct.new_node.next->NULL;

}
*/

int main(void)
{
    // Test 1: Create a node with an integer
    int number = 42;
    t_list *node1 = ft_lstnew(&number);
    
    if (node1)
    {
        printf("Test 1 - Integer node:\n");
        printf("  Content: %d\n", *(int *)(node1->content));
        printf("  Next pointer: %p (should be NULL)\n", node1->next);
        printf("  ✅ Node created successfully\n\n");
    }
    else
        printf("❌ Test 1 failed: ft_lstnew returned NULL\n");

    // Test 2: Create a node with a string
    char *str = "Hello, World!";
    t_list *node2 = ft_lstnew(str);
    
    if (node2)
    {
        printf("Test 2 - String node:\n");
        printf("  Content: %s\n", (char *)(node2->content));
        printf("  Next pointer: %p (should be NULL)\n", node2->next);
        printf("  ✅ Node created successfully\n\n");
        free(node2);
    }
    else
        printf("❌ Test 2 failed: ft_lstnew returned NULL\n");

    // Test 3: Create a node with NULL content
    t_list *node3 = ft_lstnew(NULL);
    
    if (node3)
    {
        printf("Test 3 - NULL content node:\n");
        printf("  Content: %p (should be NULL)\n", node3->content);
        printf("  Next pointer: %p (should be NULL)\n", node3->next);
        printf("  ✅ Node created successfully\n\n");
        free(node3);
    }
    else
        printf("❌ Test 3 failed: ft_lstnew returned NULL\n");

    // Test 4: Multiple nodes and linking them
    int a = 1, b = 2, c = 3;
    t_list *head = ft_lstnew(&a);
    t_list *second = ft_lstnew(&b);
    t_list *third = ft_lstnew(&c);
    
    if (head && second && third)
    {
        head->next = second;
        second->next = third;
        
        printf("Test 4 - Linked nodes:\n");
        printf("  Node 1 content: %d\n", *(int *)(head->content));
        printf("  Node 2 content: %d\n", *(int *)(head->next->content));
        printf("  Node 3 content: %d\n", *(int *)(head->next->next->content));
        printf("  ✅ Linked list created successfully\n\n");
        
        // Clean up
        free(head);
        free(second);
        free(third);
    }
    else
        printf("❌ Test 4 failed: Could not create nodes\n");

    // Clean up remaining nodes
    if (node1)
        free(node1);
    
    return (0);
}
