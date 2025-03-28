#include "libft.h"

t_ls	*ft_lds(int *arr, int size, bool need_to_free)
{
	int		*rev_arr;
	t_ls	*lds;
	int		i;
	int		j;

	rev_arr = (int *)malloc(size * sizeof(int));
	i = size;
	j = 0;
	while (i)
		rev_arr[j++] = arr[i--];
	if (need_to_free)
		free(arr);
	lds = ft_lis(rev_arr, size, 1);
	rev_arr = (int *)malloc(lds->len * sizeof(int));
	j = lds->len;
	while (j)
		rev_arr[i++] = lds->ls[--j];
	while (i--)
		lds->ls[i] = rev_arr[i];
	free(rev_arr);
	return (lds);
}
