/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linear_Search.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:45:05 by hamza_hat         #+#    #+#             */
/*   Updated: 2025/02/23 11:36:44 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*int_arr_search(int *arr, int size, int nb)
{
	int	i;

	if (!arr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (arr[i] == nb)
			return (&arr[i]);
		i++;
	}
	return (NULL);
}
