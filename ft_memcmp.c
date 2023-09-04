/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:26:13 by egrevess          #+#    #+#             */
/*   Updated: 2022/10/17 13:26:15 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t n)
{
	size_t		i;
	const char	*ptr1;
	const char	*ptr2;

	i = 0;
	if (n == 0)
		return (0);
	ptr1 = (const char *) pointer1;
	ptr2 = (const char *) pointer2;
	while (i < n - 1 && ptr1[i] == ptr2[i])
		i++;
	return ((unsigned char) ptr1[i] - (unsigned char) ptr2[i]);
}
