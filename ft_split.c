/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:41:24 by lhumbert          #+#    #+#             */
/*   Updated: 2021/10/22 00:19:35 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_cntparts(char const *s, char c)
{
	size_t	ret;
	size_t	i;

	ret = 0;
	i = 0;
	while (s[i])
	{
		if ((!s[i + 1] || s[i + 1] == c) && s[i] != c)
			ret++;
		i++;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	size_t	asize;
	size_t	len;
	char	**ret;

	if (!s)
		return (NULL);
	asize = ft_cntparts(s, c);
	ret = (char **)malloc(sizeof(char *) * (asize + 1));
	if (!ret)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len)
			*(ret++) = ft_substr(s, 0, len);
		s += len;
	}
	*ret = NULL;
	ret -= asize;
	return (ret);
}
