/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 11:24:32 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/04 11:53:10 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long unsigned int	nbrcreator(int i, int len, char *str)
{
	long unsigned int	rtr;
	int					nbrpos;
	int					nbr;

	rtr = 0;
	while (i != len)
	{
		nbr = str[i++] - '0';
		nbrpos = i;
		while (nbrpos < len)
		{
			nbr *= 10;
			nbrpos++;
		}
		rtr += nbr;
	}
	return (rtr);
}

int					negat(char ch)
{
	if (ch == 45)
		return (1);
	return (0);
}

int					off(char *str)
{
	int i;

	i = 0;
	if (str[i] == 32)
	{
		while (str[i++] != 0)
		{
			if (str[i] == 32)
			{
				i++;
			}
			else
				break ;
		}
		return (i);
	}
	return (0);
}

int					ft_atoi(char *str)
{
	int i;
	int len;

	i = off(str);
	len = 0;
	while (str[i++] != 0)
		if ((str[0] >= 48 && str[0] <= 57) || str[0] == 45)
		{
			while (str[i] != 0)
			{
				if (str[i] >= 48 && str[i] <= 57)
					len++;
				else
					break ;
				i++;
			}
		}
	i = negat(str[0]) + off(str);
	if (negat(str[0]))
		return (nbrcreator(i, (len + i), str)) * -1;
	return (nbrcreator(i, len + i + 1, str));
}
