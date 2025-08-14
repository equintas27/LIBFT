/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:41:24 by equintas          #+#    #+#             */
/*   Updated: 2025/06/26 17:35:06 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_equal(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trimmed;
	size_t	len_s1;
	size_t	i;
	size_t	j;

	if (s1 == (void *)0 || set == (void *)0)
		return (NULL);
	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	while (ft_is_equal(s1[i], set) == 1 && s1[i])
		i++;
	while (ft_is_equal(s1[len_s1 - 1], set) == 1 && s1[len_s1 - 1])
		len_s1--;
	if (len_s1 < i)
		return (ft_strdup(""));
	trimmed = malloc((len_s1 - i) + 1);
	if (trimmed == (void *)0)
		return (NULL);
	while (i < len_s1)
		trimmed[j++] = s1[i++];
	trimmed[j] = 0;
	return (trimmed);
}
