/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:31:37 by egrevess          #+#    #+#             */
/*   Updated: 2022/10/17 13:31:39 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	if ((!haystack || !needle) && len == 0)
		return (NULL);
	ptr = (char *) haystack;
	if (needle[0] == '\0')
		return (ptr);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && j + i < len)
		{
			j++;
			if (j == ft_strlen(needle))
				return (&ptr[i]);
		}
		i++;
	}
	return (0);
}
