#include "push_swap.h"

/*!
 * @brief 
	Create new list, where each node corresponds to an arr item.
 * @param arr 
	Array of integers.
 * @param size 
	Lenght of arr.
 * @param need_to_free 
	If set to TRUE, frees arr.
 * @return 
	New linked list.
 */
t_stack	*t_stack_from_arr(long *arr, int size, bool need_to_free)
{
	t_stack	*lst;
	int		i;

	lst = 0;
	i = -1;
	while (++i < size)
		t_stack_add_back(&lst, t_stack_new(arr[i]));
	if (need_to_free)
		free(arr);
	t_stack_set_to_head(&lst);
	return (lst);
}
