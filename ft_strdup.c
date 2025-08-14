/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 17:33:50 by equintas          #+#    #+#             */
/*   Updated: 2025/06/27 16:47:13 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char		*str_dst;
	size_t		len_str;
	size_t		i;

	if (str == (void *)0)
		return (NULL);
	len_str = ft_strlen(str);
	i = 0;
	str_dst = malloc(len_str + 1);
	if (str_dst == (void *)0)
		return (NULL);
	while (str[i])
	{
		str_dst[i] = str[i];
		i++;
	}
	str_dst[i] = 0;
	return (str_dst);
}
