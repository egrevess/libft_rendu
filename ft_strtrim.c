/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:36:50 by egrevess          #+#    #+#             */
/*   Updated: 2022/10/17 13:14:25 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int i, char const *s1, size_t check, char const *set)
{
	int	br;
	int	j;

	br = 0;
	while (i >= 0 && s1[i])
	{
		j = 0;
		br = 0;
		while (set[j] && i >= 0)
		{
			if (s1[i] == set[j])
				br = 1;
			j++;
		}
		if (br == 0)
			break ;
		if (br == 1)
		{
			if (check == 0)
				i++;
			else
				i--;
		}
	}
	return (i * (i >= 0));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		start;
	int		end;
	int		i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	start = ft_size(0, s1, 0, set);
	end = ft_size(ft_strlen(s1) - 1, s1, 1, set);
	if (end < start || ft_strlen(s1) == 0)
		end = start - 1;
	new = malloc(sizeof(*new) * (end - start + 2));
	if (!new)
		return (NULL);
	while (start + i <= end)
	{
		new[i] = s1[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
