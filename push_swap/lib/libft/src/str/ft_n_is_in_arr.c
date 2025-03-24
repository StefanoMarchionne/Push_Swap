#include "libft.h"

/*!
 * @brief 
	Check if n is in arr.
 * @param arr 
	Array of integers.
 * @param size 
	Size of array.
 * @param n 
	Number to check.
 * @return 
	TRUE if n is in arr.
	FALSE if n is not in arr.
 */
bool	ft_n_is_in_arr(int *arr, int size, int n)
{
	size--;
	while (size >= 0)
	{
		if (arr[size--] == n)
			return (1);
	}
	return (0);
}
