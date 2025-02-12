/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linear_Search.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza_hat <hamza_hat@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:45:05 by hamza_hat         #+#    #+#             */
/*   Updated: 2025/02/12 15:45:22 by hamza_hat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
