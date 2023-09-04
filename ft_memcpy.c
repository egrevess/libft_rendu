/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:26:30 by egrevess          #+#    #+#             */
/*   Updated: 2022/10/17 13:26:33 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*str;

	i = 0;
	if (!dst && !src)
		return (NULL);
	dest = (char *) dst;
	str = (const char *) src;
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	return (dst);
}
