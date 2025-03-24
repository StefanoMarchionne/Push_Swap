#include "push_swap.h"

/*!
 * @brief 
	Set lst to first node.
 * @param lst 
	Linked List.
 */
void	t_stack_set_to_head(t_stack **lst)
{
	while ((*lst)->prev)
		*lst = (*lst)->prev;
}
