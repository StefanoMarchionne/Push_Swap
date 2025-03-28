#include "push_swap.h"

/*!
 * @brief 
	Search data in lst and return its index.
 * @param lst 
	Linked list.
 * @param data 
	Integer.
 * @return 
	An integer corresponding to the index, if not present returns -1.
 */
int	t_stack_index_data(t_stack *lst, int data)
{
	int	i;

	i = 0;
	while (lst)
	{
		if (lst->data == data)
			return (i);
		lst = lst->next;
		i++;
	}
	return (-1);
}
