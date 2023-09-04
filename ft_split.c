/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:52:37 by egrevess          #+#    #+#             */
/*   Updated: 2022/10/17 13:28:57 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb(char const *s, char c)
{
	int	i;
	int	check;
	int	count;

	i = 0;
	check = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && check == 0)
		{
			check = 1;
			count ++;
		}
		else if (s[i] == c && check == 1)
			check = 0;
		i++;
	}
	return (count);
}

static char	*ft_puttab(int start, int end, char const *s, char c)
{
	int		i;
	char	*res;

	i = 0;
	if (s[end + 1] == '\0' && s[end] != c)
		end = end + 1;
	res = malloc(sizeof(*res) * (end - start + 1));
	if (!res)
		return (0);
	while (start < end)
	{
		res[i] = s[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

static char	**ft_free_return(char **tab, int limit)
{
	int	index;

	index = 0;
	while (index < limit)
		free(tab[index++]);
	free(tab);
	return (0);
}

static char	**ft_malloc(char const *s, char c, char **tab, int j)
{
	int	start;
	int	check;
	int	i;

	i = -1;
	check = 0;
	start = 0;
	while (s[++i])
	{
		if (s[i] != c && check == 0)
		{
			check = 1;
			start = i;
			if (!s[i + 1])
				i--;
		}
		else if ((s[i] == c || !s[i + 1]) && check == 1)
		{
			check = 0;
			tab[j] = ft_puttab(start, i, s, c);
			if (!tab[j++])
				return (ft_free_return(tab, j - 1));
		}
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(*tab) * (ft_nb(s, c) + 1));
	if (!tab)
		return (NULL);
	tab = ft_malloc(s, c, tab, j);
	if (tab)
		tab[ft_nb(s, c)] = NULL;
	return (tab);
}
