/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 23:37:11 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/28 15:55:20 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int					ft_islower(int c);
int					ft_isupper(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
long unsigned int	ft_strlen(const char *s);
int					ft_toupper(int c);
int					ft_tolower(int c);
long unsigned int	ft_strlcat(char *dest, const char *src, long unsigned int size);
long unsigned int	ft_strlcpy(char *dest, const char *src, long unsigned int size);
int					ft_strncmp(const char *s1, const char *s2, long unsigned int n);
int					ft_atoi(const char *str);
char				*ft_strdup(const char *s);
void				*ft_memcpy(void *dest, const void *src, long unsigned int n);
void				*ft_memmove(void *dest, const void *src, long unsigned int n);

#endif
