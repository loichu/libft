/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:30:41 by lhumbert          #+#    #+#             */
/*   Updated: 2021/10/15 14:31:32 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memmove(void* dst, const void* src, size_t len)
{
	char*	bsrc;
	char*	bdst;

	bsrc = (char*)src;
	bdst = (char*)dst;
	while(len-- > 0)
	{
		if (bdst || bsrc)
			*(bdst++) = *(bsrc++);
	}
	return (dst);
}
