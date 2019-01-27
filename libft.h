/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 16:37:00 by xinzhang          #+#    #+#             */
/*   Updated: 2019/01/25 15:18:05 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define	LIBFT_H

#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char    *ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
size_t	ft_strlen(const char*str);

int ft_atoi(const char *str);

int ft_isalnum(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_isascii(int c);
int ft_isalpha(int c);
int ft_toupper(int c);
int ft_tolower(int c);
#endif
