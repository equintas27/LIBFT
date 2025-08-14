/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 08:36:46 by equintas          #+#    #+#             */
/*   Updated: 2025/06/18 09:14:48 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 == (void *)0 && s2 == (void *)0)
		return (0);
	if (s1 == (void *)0)
		return (-1);
	if (s2 == (void *)0)
		return (1);
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((const unsigned char) s1[i] != (const unsigned char) s2[i])
			return ((const unsigned char) s1[i] - (const unsigned char) s2[i]);
		i++;
	}
	return (0);
}
