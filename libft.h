/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 23:37:11 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/27 21:14:22 by bizcru           ###   ########.fr       */
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
long unsigned int	ft_strlen(char *s);
int					ft_toupper(int c);
int					ft_tolower(int c);
long unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
long unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
int					ft_strncmp(const char *s1, const char *s2, unsigned int n);
int					ft_atoi(const char *str);

#endif
