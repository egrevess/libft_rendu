/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:26:51 by egrevess          #+#    #+#             */
/*   Updated: 2022/10/17 13:26:53 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	const char	*str;

	if (!dst && !src)
		return (0);
	dest = (char *) dst;
	str = (const char *) src;
	if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			i--;
			dest[i] = str[i];
		}
	}
	else
		ft_memcpy(dest, src, len);
	return (dst);
}
