/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 10:02:48 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/12 13:33:38 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lstnode;

	lstnode = *lst;
	while (lstnode != NULL)
	{
		if (lstnode->next == NULL)
		{
			*lst = NULL;
		}
		ft_lstdelone(lstnode, (*del));
		lstnode = lstnode->next;
	}
}
