#include "push_swap.h"

/*!
 * @brief 
	Adds the node ’new’ at the end of the list.
 * @param lst 
	Linked list.
 * @param new 
	The address of a pointer to the node to be added to the list.
 */
void	t_stack_add_back(t_stack **lst, t_stack *new_node)
{
	t_stack	*tmp;

	tmp = 0;
	if (*lst)
	{
		while ((*lst)->next)
			*lst = (*lst)->next;
		(*lst)->next = new_node;
		tmp = *lst;
		*lst = (*lst)->next;
		(*lst)->prev = tmp;
	}
	else
		*lst = new_node;
}
