/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:29:12 by egrevess          #+#    #+#             */
/*   Updated: 2022/10/17 13:29:14 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *) s;
	while (ptr[i])
	{
		if (ptr[i] == (unsigned char) c)
			return (&ptr[i]);
		i++;
	}
	if ((unsigned char) c == '\0')
		return (&ptr[i]);
	return (0);
}
