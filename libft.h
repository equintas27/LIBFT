/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 02:45:16 by equintas          #+#    #+#             */
/*   Updated: 2025/07/01 00:55:13 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t len);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strrchr(const char *s, int c);				
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *str);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_substr(const char *str, unsigned int start, size_t len);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
char	**ft_split(const char *s, char c);
int		ft_isalnum(int b);
int		ft_isalpha(int b);
int		ft_isascii(int b);
int		ft_isdigit(int b);
int		ft_isprint(int b);
int		ft_tolower(int b);
int		ft_toupper(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const	void *s2, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dst_len);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
#endif
