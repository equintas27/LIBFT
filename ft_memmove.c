/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:46:14 by equintas          #+#    #+#             */
/*   Updated: 2025/07/03 00:24:51 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (n == 0)
		return (dst);
	if (dst == (void *)0 || src == (void *)0)
		return (NULL);
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (tmp_dst > tmp_src)
	{
		while (n-- > 0)
		{
			tmp_dst[n] = tmp_src[n];
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
