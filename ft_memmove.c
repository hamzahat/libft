/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:33:16 by hbenmoha          #+#    #+#             */
/*   Updated: 2024/11/21 19:41:54 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*take_src;
	unsigned char		*take_dst;

	if (dst == NULL && src == NULL)
		return (dst);
	take_dst = (unsigned char *) dst;
	take_src = (const unsigned char *) src;
	if (take_dst > take_src)
		while (len--)
			*(take_dst + len) = *(take_src + len);
	else
		while (len--)
			*(take_dst++) = *(take_src++);
	return (dst);
}
