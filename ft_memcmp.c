/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:05:30 by hbenmoha          #+#    #+#             */
/*   Updated: 2024/11/21 18:57:00 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*take_s1;
	unsigned char	*take_s2;

	take_s1 = (unsigned char *)s1;
	take_s2 = (unsigned char *)s2;
	while (n--)
	{
		if (*take_s1 != *take_s2)
			return (*take_s1 - *take_s2);
		take_s1++;
		take_s2++;
	}
	return (0);
}
