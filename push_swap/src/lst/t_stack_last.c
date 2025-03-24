#include "push_swap.h"

/*!
 * @brief 
	Returns the last node of the list.
 * @param lst 
	The beginning of the list.
 * @return 
	Last node of the list.	
 */
t_stack	*t_stack_last(t_stack *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}
