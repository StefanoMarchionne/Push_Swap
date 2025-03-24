#include "push_swap.h"

/*!
 * @brief
	Check if integers in lst are sorted.
 * @param lst 
	Linked list.
 * @return 
	TRUE if integers are sorted, otherwise FALSE.
 */
bool	t_stack_is_sorted(t_stack *lst)
{
	int	prev;

	prev = -2147483648;
	while (lst)
	{
		if (lst->data >= prev)
			prev = lst->data;
		else
			return (false);
		lst = lst->next;
	}
	return (true);
}
