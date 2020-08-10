/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado </var/mail/idelgado>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:50:54 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/10 17:25:06 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*rev(char *cad)
{
	int		i;
	char	sv;
	int		len;

	len = ft_strlen(cad);
	i = 0	while (i != len / 2)
	{
		sv = cad[i];
		cad[i] = cad[len - i];
		cad[len - i] = sv;
	}
	cad[i] = 0;
	return (cad);
}

char	*ft_itoa(int n)
{
	int		res;
	int		cpn;
	char	*cad;
	int		i;
	int		neg;

	i = 0;
	cpn = n;
	res = 0;
	neg = 0;
	if(cpn < 0)
		neg = 1;
	while (cpn / 10 > 0)
	{
		res++;
		cpn  = cpn / 10;
	}
	if (!(cad = (char*)malloc(res + 1 + neg)))
		return (NULL);
	while (n / 10 > 0)
	{
		cad[i++] = (n % 10) + '0';
		n = n / 10;
	}
	if (neg)
		cad[i++] = '-';
	return (rev(cad));
}

