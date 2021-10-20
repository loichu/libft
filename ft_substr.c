/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:26:17 by lhumbert          #+#    #+#             */
/*   Updated: 2021/10/20 17:55:41 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	rlen;
	char	*ret;
	size_t	i;

	slen = ft_strlen((char*)s);
	if (start >= slen)
	{
		ret = (char*)malloc(1 * sizeof(char));
		if (!ret)
			return (0);
		*ret = '\0';
		return (ret);
	}
	if (start + len > slen)
		rlen = (slen - start + 1);
	else
		rlen = len;
	ret = (char*)malloc((rlen + 1) * sizeof(char));
	if (!ret)
		return (0);
	//s += start;
	i = -1;
	//ret[rlen] = '\0';
	while (++i < rlen)
		ret[i] = s[start + i];
	ret[i] = '\0';
	return (ret);
}
