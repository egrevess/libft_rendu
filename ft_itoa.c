/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:55:33 by egrevess          #+#    #+#             */
/*   Updated: 2022/10/17 13:23:30 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long nb)
{
	int	result;

	if (nb <= 0)
		result = 1;
	else
		result = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		result++;
	}
	return (result);
}

static void	ft_putnbr(long nb, char	*result, int index)
{
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, result, index - 1);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		nb = nb + 48;
		result[index] = nb;
	}
}

char	*ft_itoa(int nb)
{
	char	*result;
	long	lnb;

	lnb = nb;
	result = malloc(sizeof(*result) * (len(lnb) + 1));
	if (result == NULL)
		return (0);
	ft_putnbr(lnb, result, len(lnb) - 1);
	result[len(lnb)] = '\0';
	return (result);
}
