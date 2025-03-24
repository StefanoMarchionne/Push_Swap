#include "libft.h"

/*!
 * @brief 
	Free a string matrix.
 * @param matrix
	The string matrix.
 */
void	ft_strmatrixfree(char ***matrix)
{
	char	**ptr;

	if (matrix == NULL || *matrix == NULL)
		return ;
	ptr = *matrix;
	while (*ptr != NULL)
	{
		free(*ptr);
		ptr++;
	}
	free(*matrix);
	*matrix = NULL;
}
