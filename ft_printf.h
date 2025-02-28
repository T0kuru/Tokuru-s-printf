/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:30:30 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/28 23:30:42 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
//# include "Libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *smth, ...);
int		ft_printf_next(va_list args, const char *smth);
int		ft_parse_specificator(va_list args, char spec);
int		ft_printf_char(char x);
int		ft_printf_string(char *str);
char	*ft_char(char *result, unsigned int nbr, long int len);
int		ft_len(int n);
char	*ft_itoa(int n);
int		ft_printf_hexdec_pointer(uintptr_t ptr);
int		ft_hexdec_sub(uintptr_t ptr, char *result);
int		ft_dec_number(int n);
int		ft_printf_count(char x, int *count);
int		ft_printf_uns_int(unsigned int n);
int		ft_printf_hexdec_num(unsigned int n, char	*hex_digits);

#endif
