/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:17:03 by equintas          #+#    #+#             */
/*   Updated: 2025/06/25 18:55:30 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	tmp = malloc(nmemb * size);
	if (tmp == (void *)0)
		return (NULL);
	ft_bzero(tmp, nmemb * size);
	return (tmp);
}
