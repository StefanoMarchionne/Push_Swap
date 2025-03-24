#include "push_swap.h"

/*!
 * @brief 
	Find max in lst.
 * @param lst 
	Linked list.
 * @return 
	Max.
 */
int	t_stack_max(t_stack *lst)
{
	int	max;

	max = MIN_INT;
	while (lst)
	{
		if (lst->data > max)
			max = lst->data;
		lst = lst->next;
	}
	return (max);
}
