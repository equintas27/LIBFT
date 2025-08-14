/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 09:35:31 by equintas          #+#    #+#             */
/*   Updated: 2025/06/27 16:45:56 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char		*sub;
	size_t		len_str;
	size_t		i;

	if (str == (void *)0)
		return (NULL);
	len_str = ft_strlen(str);
	if (start >= len_str)
		return (ft_strdup(""));
	if (len > len_str - start)
		len = len_str - start;
	sub = malloc(len + 1);
	if (sub == (void *)0)
		return (NULL);
	i = 0;
	while (i < len && str[start + i])
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}
