/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 03:02:12 by lhumbert          #+#    #+#             */
/*   Updated: 2021/10/19 03:10:54 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!*s1)
		return (0 - *s2);
	while (n-- && *s1)
	{
		if (*(s1++) != *(s2++))
			return ((unsigned char)*(--s1) - (unsigned char)*(--s2));
	}
	return (0);
}
