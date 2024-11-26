/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 02:15:01 by hbenmoha          #+#    #+#             */
/*   Updated: 2024/11/22 18:05:44 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(long num, const char *str, int sign)
{
	if (num > 922337203685477580 || \
			(num == (922337203685477580) && (*str - '0') > 7))
	{
		if (sign == -1)
			return (0);
		return (-1);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	long	num;
	int		sign;
	int		result;

	num = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = check_overflow(num, str, sign);
		if (result != 1)
			return (result);
		num = ((num * 10) + (*str - 48));
		str++;
	}
	return ((int)(num * sign));
}
