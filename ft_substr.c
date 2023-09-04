/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:25:55 by egrevess          #+#    #+#             */
/*   Updated: 2022/10/12 14:35:37 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	size;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) - start < (size_t) len && ft_strlen(s) >= start)
		size = ft_strlen(s) - start;
	else if (ft_strlen(s) <= start)
		size = 0;
	else
		size = len;
	str = malloc(sizeof(*str) * (size + 1));
	if (!str)
		return (NULL);
	while (start < ft_strlen(s) && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
