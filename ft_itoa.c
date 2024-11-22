/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:31:14 by hbenmoha          #+#    #+#             */
/*   Updated: 2024/11/21 18:45:58 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_digits(int n)
{
	int	count;

	count = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;
	int		sign;

	num = n;
	sign = (num < 0);
	if (sign)
		num = -num;
	len = count_digits(num) + sign;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > sign)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
