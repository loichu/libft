/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:59:20 by lhumbert          #+#    #+#             */
/*   Updated: 2021/10/22 00:03:52 by lhumbert         ###   ########.fr       */
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

int	ft_nbdigits(int n)
{
	char	dgts;
	int		mult;

	dgts = 0;
	mult = 10;
	while (n / mult > 1)
	{
		printf("%d / %d = %d\n", n, mult, n / mult);
		dgts++;
		mult *= 10;
	}
	return (dgts + 1);
}

//char	*ft_retminint()
//{
//	char	minint[12];
//	char	*ret;
//	int		i;
//
//	minint = "-2147483648";
//	ret	= (char *)malloc(sizeof(char) * 12);
//	if (!ret)
//		return (NULL);
//	i = -1;
//	while (minint[++i])
//	{
//		ret[i] = minint[i];
//	}
//	ret[i] = '\0';
//	return (ret);
//}

char	*ft_itoa(int n)
{
	char	*ret;
	int		dgts;
	int		mult;
	char	neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	printf("n: %d\n", n);
	dgts = ft_nbdigits(n);
	neg = 0;
	if (n < 0)
	{
		printf("< 0\n");
		neg = 1;
		dgts++;
		n *= -1;
	}
	printf("n: %d\tnb digits: %d\n", n, dgts);
	ret = (char *)malloc(sizeof(char) * (dgts + 1));
	if (!ret)
		return (NULL);
	if (neg)
		*(ret++) = '-';
	//ret[dgts] = '\0';
	mult = ft_getmult(n);
	while (mult > 1)
	{
		printf("m: %d\n", mult);
		printf("current digit: %d\n", n / mult);
		*(ret++) = 48 + (n / mult);
		n -= (n / mult) * mult;
		mult /= 10;
	}
	*(ret++) = 48 + n;
	*ret = '\0';
	ret -= dgts;
	printf("ret: %s\n", ret);
	return (ret);
}
