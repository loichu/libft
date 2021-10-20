/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 02:08:52 by lhumbert          #+#    #+#             */
/*   Updated: 2021/10/19 03:05:41 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ret;
	char	found;
	char	*orig;

	if (!*needle)
		return ((char*)haystack);
	orig = (char*)needle;
	found = 0;
	while (*haystack && len--)
	{
		if (*haystack == *needle)
		{
			if (!found)
				ret = (char*)haystack;
			found = 1;
			if (!*(++needle))
				return (ret);
		}
		else
		{
			if (found)
				needle = orig;
			found = 0;
		}
		haystack++;
	}
	return (0);
}
