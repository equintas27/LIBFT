/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:40:26 by equintas          #+#    #+#             */
/*   Updated: 2025/07/01 00:51:34 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cont_word(const char *s, char c)
{
	int	count;
	int	j;
	int	i;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
		{
			j = 1;
			count++;
		}
		else if (s[i] == c)
			j = 0;
		i++;
	}
	return (count);
}

static int	len_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free (str[i]);
		i++;
	}
	free (str);
	return (NULL);
}

static const char	*skip_delim(const char *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

char	**ft_split(const char *s, char c)
{
	char	**word;
	int		j;
	int		i;
	int		t_words;

	if (s == (void *)0)
		return (NULL);
	t_words = cont_word(s, c);
	word = malloc((t_words + 1) * sizeof(char *));
	if (word == (void *)0)
		return (NULL);
	j = 0;
	while (j < t_words)
	{
		s = skip_delim(s, c);
		word[j] = (char *)malloc((len_word(s, c) + 1) * sizeof(char));
		if (word[j] == (void *)0)
			return (ft_free(word));
		i = 0;
		while (*s != c && *s)
			word[j][i++] = *s++;
		word[j++][i] = 0;
	}
	word[t_words] = NULL;
	return (word);
}
