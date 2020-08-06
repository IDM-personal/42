/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 10:38:08 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/04 11:13:05 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, int c)
{
	int ch;
	int i;

	i = 0;
	ch = c;
	while (str[i] != 0)
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	if (str[i] == ch)
		return (&str[i]);
	return (0);
}
