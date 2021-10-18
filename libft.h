/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.a                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:18:42 by lhumbert          #+#    #+#             */
/*   Updated: 2021/10/18 17:50:12 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(char* str);
void*	ft_memset(void* b, int c, size_t len);
void	ft_bzero(void* s, size_t n);
void*	ft_memcpy(void* restrict dst, const void* restrict src, size_t n);
void*	ft_memmove(void* dst, const void* src, size_t len);
size_t	ft_strlcpy(char* dst, const char* src, size_t dstsize);
size_t	ft_strlcat(char* dst, const char *src, size_t dstsize);
int		ft_tolower(int c);
