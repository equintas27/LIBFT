/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 18:59:28 by equintas          #+#    #+#             */
/*   Updated: 2025/06/27 16:58:49 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	size_t			len_s;
	unsigned int	i;

	if (s == (void *)0 || f == (void *)0)
		return (NULL);
	i = 0;
	len_s = ft_strlen(s);
	new_str = malloc(len_s + 1);
	if (new_str == (void *)0)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}
