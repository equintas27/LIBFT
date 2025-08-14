/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:41:01 by equintas          #+#    #+#             */
/*   Updated: 2025/07/03 00:44:40 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	if (len == 0)
		return (b);
	ptr = (unsigned char *)b;
	if (ptr == (void *)0)
		return (NULL);
	while (len--)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (b);
}
