/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 10:59:23 by equintas          #+#    #+#             */
/*   Updated: 2025/06/25 18:57:01 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (unsigned char *)s;
	if (tmp == (void *)0)
		return (NULL);
	while (i < n)
	{
		if (tmp[i] == (unsigned char )c)
			return ((void *) &tmp[i]);
		i++;
	}
	return (NULL);
}
