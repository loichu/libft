/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:56:59 by lhumbert          #+#    #+#             */
/*   Updated: 2021/10/19 01:47:17 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	b;

	str = (unsigned char*)s;
	b = (unsigned char)c;
	while (*str && n--)
	{
		if (*str == b)
			return (str);
		str++;
	}
	if (*str == '\0' && b == '\0')
		return (str);
	return (0);
}
