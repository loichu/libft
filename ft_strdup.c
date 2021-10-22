/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:07:39 by lhumbert          #+#    #+#             */
/*   Updated: 2021/10/22 02:09:25 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*ret;

	len = ft_strlen((char *)s1) + 1;
	ret = (char *)malloc(len * sizeof(char));
	if (!ret)
		return (0);
	while (*(s1++))
		*(ret++) = *(s1 - 1);
	*ret = '\0';
	return (ret - len + 1);
}
