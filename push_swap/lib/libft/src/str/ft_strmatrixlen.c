#include "libft.h"

/*!
 * @brief 
	Returns the length of a matrix.
 * @param matrix
	The matrix to get the length of. 
 * @return 
	The length of the matrix.
 */
size_t	ft_strmatrixlen(char **matrix)
{
	size_t	i;

	i = 0;
	while (matrix && matrix[i])
		i++;
	return (i);
}
