/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bunus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:42:51 by egrevess          #+#    #+#             */
/*   Updated: 2022/10/17 11:15:35 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*save;

	if (!lst || !del)
		return ;
	temp = *lst;
	if (!temp)
		*lst = NULL;
	else
	{	
		while (temp)
		{
			save = temp->next;
			ft_lstdelone(temp, del);
			temp = save;
		}
		*lst = NULL;
	}
}
