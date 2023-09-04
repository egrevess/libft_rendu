/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:31:59 by egrevess          #+#    #+#             */
/*   Updated: 2022/10/17 13:32:01 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		last;
	char	*ptr;

	i = 0;
	last = -1;
	ptr = (char *) s;
	while (ptr[i])
	{
		if (ptr[i] == (unsigned char) c)
			last = i;
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&ptr[i]);
	if (last == -1)
		return (0);
	return (&ptr[last]);
}
