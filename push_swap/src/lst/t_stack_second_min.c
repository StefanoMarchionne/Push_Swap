#include "push_swap.h"

/*!
 * @brief 
	Find the second min.
 * @param lst 
	Linked list.
 * @param min 
	Min of lst.
 * @return 
	Second min.
 */
int	t_stack_second_min(t_stack *lst, int min)
{
	int	second_min;

	second_min = MAX_INT;
	while (lst)
	{
		if (lst->data < second_min && lst->data != min)
			second_min = lst->data;
		lst = lst->next;
	}
	return (second_min);
}
