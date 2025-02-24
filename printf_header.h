/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_header.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:30:30 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/24 20:53:56 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_HEADER_H
# define PRINTF_HEADER_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *smth, ...);
int		ft_parse_specificator(va_list args, char spec);
int		ft_printf_char(char x);
int		ft_printf_string(char *str);
//int		ft_printf_hexdec_pointer(va_arg(args, void *i));
int		ft_printf_dec_number(int n);
//int		ft_printf_uns_int(va_arg(args, unsigned int i));
//int		ft_printf_hexdec_num_lower(va_arg(args, unsigned int i));
//int		ft_printf_hexdec_num_upper(va_arg(args, unsigned int i));

#endif
