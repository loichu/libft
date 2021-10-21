/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:59:20 by lhumbert          #+#    #+#             */
/*   Updated: 2021/10/22 01:07:20 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int ft_getmult(int n)
{
	int	ret;

	ret = 1;
	while (n / ret > 9)
		ret *= 10;
	return (ret);
}

int	ft_initdigits(int *n)
{
	char	dgts;
	int		mult;

	dgts = 0;
	if (*n < 0)
	{
		dgts++;
		*n *= -1;
	}
	mult = 10;
	while (*n / mult > 0)
	{
		dgts++;
		mult *= 10;
	}
	return (dgts + 1);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		dgts;
	int		mult;
	char	neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	if (n < 0)
		neg = 1;
	dgts = ft_initdigits(&n);
	ret = (char *)malloc(sizeof(char) * (dgts + 1));
	if (!ret)
		return (NULL);
	if (neg)
		*(ret++) = '-';
	mult = ft_getmult(n);
	while (mult > 1)
	{
		*(ret++) = 48 + (n / mult);
		n -= (n / mult) * mult;
		mult /= 10;
	}
	*(ret++) = 48 + n;
	*ret = '\0';
	printf("\ndgts: %d\tFinal: %s\n", dgts, (ret - dgts));
	return (ret - dgts);
}
