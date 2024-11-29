/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:16:57 by hbenmoha          #+#    #+#             */
/*   Updated: 2024/11/29 15:05:28 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	l_src;
	size_t	l_dst;
	int		i;

	l_src = ft_strlen(src);
	if (!dst && dsize == 0)
		return (l_src);
	l_dst = ft_strlen(dst);
	if (dsize <= l_dst)
		return (l_src + dsize);
	i = 0;
	while (src[i] && ((l_dst + i) < (dsize - 1)))
	{
		dst[l_dst + i] = src[i];
		i++;
	}
	dst[l_dst + i] = '\0';
	return (l_dst + l_src);
}
