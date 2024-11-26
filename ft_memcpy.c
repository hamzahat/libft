/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:45:06 by hbenmoha          #+#    #+#             */
/*   Updated: 2024/11/22 19:22:47 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*take_src;
	unsigned char		*take_dst;

	if (dst == NULL && src == NULL)
		return (dst);
	take_dst = (unsigned char *)dst;
	take_src = (const unsigned char *)src;
	while (n--)
		*(take_dst++) = *(take_src++);
	return (dst);
}
