/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:33:03 by equintas          #+#    #+#             */
/*   Updated: 2025/06/25 18:59:00 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	i = 0;
	if (dst == (void *)0 || src == (void *)0)
		return (0);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= n)
		return (n + len_src);
	while (src[i] && len_dst + i + 1 < n)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	if (len_dst + i < n)
		dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
