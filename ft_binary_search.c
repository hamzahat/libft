/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binary_Search.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:32:45 by hamza_hat         #+#    #+#             */
/*   Updated: 2025/02/23 11:30:38 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*int_arr_binary_search(int *arr, int low, int high, int key)
{
	int	mid;

	while (low <= high)
	{
		mid = ((unsigned int)low + (unsigned int)high) >> 1;
		if (arr[mid] == key)
			return (&arr[mid]);
		else if (arr[mid] < key)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (NULL);
}
