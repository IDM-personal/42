/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelgado <idelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:47:22 by idelgado          #+#    #+#             */
/*   Updated: 2020/08/06 13:05:08 by idelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>

char			*ft_strdup(const char *s1);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_memcmp(void *s1, void *s2, size_t n);
void			*ft_memchr(void *s, int c, size_t n);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strchr(char *str, int c);
char			*ft_strrchr(char *str, int c);
int				ft_atoi(char *str);
void			ft_bzero(void *s, size_t n);
int				ft_isalnum(int ch);
int				ft_isalpha(int ch);
int				ft_isascii(int ch);
int				ft_isdigit(int ch);
int				ft_isprint(int ch);
void			*ft_memccpy(void *dst, void *src, int c, size_t n);
void			*ft_memcpy(void *dst, void *src, size_t n);
void			*ft_memmove(void *dst, void *src, size_t n);
void			*ft_memset(void *b, int c, size_t size);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
int				ft_strlen(const char *str);
int				ft_strncmp(char *s1, char *s2, size_t n);
int				ft_tolower(int c);
int				ft_toupper(int c);

#endif
