#include "push_swap.h"

/*!
 * @brief 
	Allocates (with malloc(3)) and returns a new node;
	The member variable [data] is initialized with the value of the parameter
	[data];
	The variable [next] and [prev] are initialized to NULL.
 * @param data 
	The data to create the node with.
 * @return 
	The new node.
 */
t_stack	*t_stack_new(int data)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (0);
	node->data = data;
	node->next = 0;
	node->prev = 0;
	return (node);
}
