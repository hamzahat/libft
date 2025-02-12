# include "libft.h"
int *int_arr_search(int *arr, int size, int nb)
{
	if (!arr)
		return (NULL);
	int i = 0;
	while (i < size)
	{
		if (arr[i] == nb)
			return (&arr[i]);
		i++;
	}
	return (NULL);
}
