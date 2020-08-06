/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 10:38:08 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/06 08:50:22 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int		ch;
	int		i;
	char	*lo;

	lo = NULL;
	i = 0;
	ch = c;
	while (str[i] != 0)
	{
		if (str[i] == ch)
			lo = &str[i];
		i++;
	}
	if (str[i] == ch)
		return (&str[i]);
	return (lo);
}
