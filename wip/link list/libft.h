/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammirzae <ammirzae@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:07:33 by ammirzae          #+#    #+#             */
/*   Updated: 2026/04/29 10:49:44 by ammirzae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t length);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int num);
int		ft_isalpha(int number);
int		ft_isascii(int num);
int		ft_isdigit(int num);
int		ft_isprint(int number);
void	*ft_memchr(const void *str, int number, size_t size);
int		ft_memcmp(const void *str1, const void *str2, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t length);
void	*ft_memmove(void *dest, const void *src, size_t length);
void	*ft_memset(void *s, int c, size_t length);
char	**ft_split(const char *str, char sep);
char	*ft_strchr(const char *str, int num);
char	*ft_strdup(char *src);
char	*ft_strjoin(const char *str1, const char *str2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *hey, const char *needle, size_t length);
char	*ft_strrchr(const char *str, int num);
char	*ft_substr(char const *str, unsigned int start, size_t len);
int		ft_tolower(int num);
int		ft_toupper(int num);
char	*ft_strtrim(const char *hey, const char *needles);

#endif
