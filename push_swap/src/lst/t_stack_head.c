#include "push_swap.h"

/*!
 * @brief
	Search and return first node of lst.
 * @param lst 
	Linked list.
 * @return 
	Head of the lst.
 */
t_stack	*t_stack_head(t_stack *lst)
{
	while (lst->prev)
		lst = lst->prev;
	return (lst);
}
