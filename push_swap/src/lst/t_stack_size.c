#include "push_swap.h"

/*!
 * @brief 
	Counts the number of nodes in a list.
 * @param lst 
	The beginning of the list
 * @return 
	The length of the list.
 */
int	t_stack_size(t_stack *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst->prev)
		lst = lst->prev;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
