#include "push_swap.h"

/*!
 * @brief 
	Find min in lst.
 * @param lst 
	Linked list.
 * @return 
	Min.
 */
int	t_stack_min(t_stack *lst)
{
	int	min;

	min = MAX_INT;
	while (lst)
	{
		if (lst->data < min)
			min = lst->data;
		lst = lst->next;
	}
	return (min);
}
