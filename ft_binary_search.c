/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binary_Search.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza_hat <hamza_hat@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:32:45 by hamza_hat         #+#    #+#             */
/*   Updated: 2025/02/13 09:45:49 by hamza_hat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int *int_arr_binarySearch(int *arr, int low, int high, int key)
{
	while (low <= high)
	{
		int	mid;

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