/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:41:08 by equintas          #+#    #+#             */
/*   Updated: 2025/06/30 11:49:16 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	if (ptr == (void *)0)
		return ;
	while (len--)
	{
		*ptr = 0;
		ptr++;
	}
}
