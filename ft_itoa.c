/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 09:40:46 by equintas          #+#    #+#             */
/*   Updated: 2025/06/28 19:06:23 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	len_int(int numb)
{
	long	tmp;
	int		i;

	i = 0;
	tmp = numb;
	if (tmp <= 0)
	{
		i = 1;
		tmp *= -1;
	}
	while (tmp != 0)
	{
		tmp = tmp / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	tmp;
	int		size;
	int		i;

	tmp = n;
	size = len_int(tmp);
	str = (char *)malloc((size + 1) * sizeof(char));
	if (str == (void *)0)
		return (NULL);
	if (tmp == 0)
		str[0] = '0';
	if (tmp < 0)
	{
		str[0] = '-';
		tmp *= -1;
	}
	i = size - 1;
	while (tmp != 0)
	{
		str[i--] = ((tmp % 10) + 48);
		tmp = tmp / 10;
	}
	str[size] = 0;
	return (str);
}
