/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:59:38 by lhumbert          #+#    #+#             */
/*   Updated: 2021/10/18 17:11:59 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char* dst, const char * src, size_t dstsize)
{
	unsigned int	src_len;
	unsigned int	rem;
	unsigned int	i;

	i = ft_strlen(dst);
	src_len = ft_strlen((char*)src);
	rem = src_len;
	if (dstsize <= i)
		rem += dstsize;
	else
		rem += i;
	dst += i;
	while (*src && i + 1 < dstsize)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = '\0';
	return (rem);
}
