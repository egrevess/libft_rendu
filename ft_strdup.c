/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:29:38 by egrevess          #+#    #+#             */
/*   Updated: 2022/10/17 13:29:42 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(char *src)
{
	size_t	count;

	count = 0;
	while (src[count] != 0)
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*new_src;
	size_t	i;

	i = 0;
	new_src = malloc (sizeof(*new_src) * (ft_len(src) + 1));
	if (!new_src)
		return (0);
	while (i < ft_len(src))
	{
		new_src[i] = src[i];
		i++;
	}
	new_src[i] = '\0';
	return (new_src);
}
