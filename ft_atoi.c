/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:17:32 by egrevess          #+#    #+#             */
/*   Updated: 2022/10/17 13:20:35 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	i;
	size_t		nb;
	long int	neg;
	int			count;

	i = 0;
	nb = 0;
	neg = 1;
	count = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg = -1 * neg;
	}
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && ++count)
		nb = str[i++] + (nb * 10) - 48;
	if ((nb >= 9223372036854775807 || count >= 20) && neg == 1)
		nb = -1;
	else if ((nb > 9223372036854775807 || count >= 20) && neg == -1)
		nb = 0;
	return (nb * neg);
}
