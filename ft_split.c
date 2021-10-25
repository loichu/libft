/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:41:24 by lhumbert          #+#    #+#             */
/*   Updated: 2021/10/25 20:49:57 by lhumbert         ###   ########.fr       */
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
	return (ret + 1);
}

char	**ft_freebiga(char **biga, size_t i)
{
	while (i--)
		free(biga[i]);
	free(biga);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**ret;
	size_t	i;

	if (!s)
		return (NULL);
	ret = (char **)malloc(sizeof(char *) * ft_cntparts(s, c));
	if (!ret)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len)
			ret[i] = ft_substr(s, 0, len);
		if (len && !ret[i++])
			return (ft_freebiga(ret, i));
		s += len;
	}
	ret[i] = NULL;
	return (ret);
}
