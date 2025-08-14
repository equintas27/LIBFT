/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:39:01 by equintas          #+#    #+#             */
/*   Updated: 2025/07/03 00:18:33 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	if (len == 0)
		return (dst);
	if (dst == (void *)0 || src == (void *)0)
		return (NULL);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	while (len--)
		*(ptr_dst++) = *(ptr_src++);
	return (dst);
}
