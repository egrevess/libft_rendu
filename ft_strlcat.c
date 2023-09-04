/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:10:18 by egrevess          #+#    #+#             */
/*   Updated: 2022/10/12 10:14:44 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	d;

	if ((!dst || !src) && dstsize == 0)
		return (0);
	d = 0;
	while (dst[d] != '\0' && d < dstsize)
	{
		d++;
	}
	s = 0;
	while (src[s] != '\0' && s + d + 1 < dstsize)
	{
		dst[d + s] = src[s];
		s++;
	}
	if (d != dstsize)
		dst[d + s] = '\0';
	return (ft_strlen(src) + d);
}
