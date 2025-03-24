#include "push_swap.h"

/*!
 * @brief 
	Delete last node.
 * @param lst 
	Linked list.
 */
void	t_stack_del_last(t_stack **lst)
{
	*lst = t_stack_last(*lst);
	*lst = (*lst)->prev;
	free((*lst)->next);
	(*lst)->next = 0;
}
