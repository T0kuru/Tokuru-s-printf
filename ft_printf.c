/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:29:08 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/26 21:54:46 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *smth, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, smth);
	while (smth[i])
	{
		if (smth[i] == '%')
		{
			i++;
			count += ft_parse_specificator(args, smth[i]);
		}
		else
			count += ft_printf_char(smth[i]);
		i++;
	}
	va_end(args);
	return (count);
}

int	ft_parse_specificator(va_list args, char spec)
{
	int	i;

	i = 0;
	if (spec == '%')
		i += ft_printf_char('%');
	else if (spec == 'c')
		i += ft_printf_char(va_arg(args, int));
	else if (spec == 's')
		i += ft_printf_string(va_arg(args, char *));
	else if (spec == 'p')
		i += ft_printf_hexdec_pointer(va_arg(args, void *));
	else if (spec == 'd' || spec == 'i')
		i += ft_dec_number(va_arg(args, int));
	else if (spec == 'u')
	i += ft_printf_uns_int(va_arg(args, unsigned int));
//	else if (spec == 'x')
//		i += ft_printf_hexdec_num_lower(va_arg(args, unsigned int));
//	else if (spec == 'X')
//		i += ft_printf_hexdec_num_upper(va_arg(args, unsigned int));
	return (i);
}
