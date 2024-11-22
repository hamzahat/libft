/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:04:36 by hbenmoha          #+#    #+#             */
/*   Updated: 2024/11/21 19:56:56 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_it(char **ptr, int i)
{
	while (i--)
		free(ptr[i]);
	free(ptr);
	return (NULL);
}

static int	count_words(char const *s, char c)
{
	int	count;
	int	key;

	count = 0;
	key = 1;
	while (*s)
	{
		if (*s != c && key)
		{
			count++;
			key = 0;
		}
		else if (*s == c)
			key = 1;
		s++;
	}
	return (count);
}

static char	**split_and_fill(char const *s, char c, char **ptr)
{
	int	len;
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			ptr[i] = ft_substr(s, 0, len);
			if (!ptr[i])
				return (free_it(ptr, i));
			i++;
			s += len;
		}
	}
	ptr[i] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!ptr)
		return (NULL);
	return (split_and_fill(s, c, ptr));
}
