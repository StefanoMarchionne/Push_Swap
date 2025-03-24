#include "push_swap.h"

/*!
 * @brief 
	Delete and frees the lst.
 * @param lst 
	Linked list.
 */
void	*t_stack_free(t_stack **lst)
{
	t_stack	*tmp;

	tmp = 0;
	if (*lst)
	{
		t_stack_set_to_head(lst);
		while ((*lst)->next)
		{
			*lst = (*lst)->next;
			tmp = (*lst)->prev;
			free(tmp);
			(*lst)->prev = 0;
		}
		free(*lst);
		*lst = 0;
	}
	return (0);
}
