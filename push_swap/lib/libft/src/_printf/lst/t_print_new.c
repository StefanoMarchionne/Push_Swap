#include "libft.h"

/*!
 * @brief 
	Allocates (with malloc(3)) and returns a new node;
	The member variable ’data’ is initialized with the value of the parameter
	’data’;
	The variable ’next’ is initialized to NULL.
 * @param data 
	The data to create the node with.
 * @return 
	The new node.
 */
t_print	*t_print_new(char data)
{
	t_print	*lst;

	lst = malloc(sizeof(t_print));
	if (!lst)
		return (0);
	lst->data = data;
	lst->next = 0;
	return (lst);
}
