/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 22:14:15 by lhumbert          #+#    #+#             */
/*   Updated: 2021/10/22 02:14:00 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_isspace(char c)
{
	if (c == ' '
		|| c == '\f'
		|| c == '\n'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v')
		return (1);
	else
		return (0);
}

char	*skip_spaces(const char *str)
{
	while (ft_isspace(*str))
		str++;
	return ((char *)str);
}

int	ft_atoi(const char *str)
{
	char	sign;
	char	*a;
	int		i;

	a = skip_spaces(str);
	sign = 1;
	if (*a == '-' || *a == '+')
	{
		if (*(a++) == '-')
			sign = -1;
	}
	i = 0;
	while (*a == '0')
		a++;
	while (ft_isdigit(*a))
	{
		if (i > 214748364 && sign > 0)
			return (-1);
		if (i > 214748364 && sign < 0)
			return (0);
		i *= 10;
		i += *(a++) - 48;
	}
	return (i * sign);
}
