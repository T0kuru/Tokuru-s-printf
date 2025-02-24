/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:30:30 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/24 22:11:16 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *smth, ...);
int		ft_parse_specificator(va_list args, char spec);
int		ft_printf_char(char x);
int		ft_printf_string(char *str);
//int		ft_printf_hexdec_pointer(va_arg(args, void *i));
int		ft_printf_dec_number(int n, int *count);
int		ft_printf_count(char x, int *count);
//int		ft_printf_uns_int(va_arg(args, unsigned int i));
//int		ft_printf_hexdec_num_lower(va_arg(args, unsigned int i));
//int		ft_printf_hexdec_num_upper(va_arg(args, unsigned int i));

#endif
