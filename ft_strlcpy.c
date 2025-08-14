/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 03:29:12 by equintas          #+#    #+#             */
/*   Updated: 2025/06/18 05:30:01 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t dst_len)
{
	size_t	src_len;

	if ((dst == (void *)0) || (src == (void *)0))
		return (0);
	src_len = ft_strlen(src);
	if (src_len + 1 < dst_len)
		ft_memcpy(dst, src, src_len + 1);
	else if (dst_len != 0)
	{
		ft_memcpy(dst, src, dst_len - 1);
		dst[dst_len - 1] = 0;
	}
	return (src_len);
}
