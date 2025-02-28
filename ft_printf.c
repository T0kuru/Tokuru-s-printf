/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:29:08 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/28 23:10:39 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *smth, ...)
{
	va_list	args;
	int		count;

	va_start(args, smth);
	count = ft_printf_next(args, smth);
	va_end(args);
	return (count);
}

int	ft_printf_next(va_list args, const char *smth)
{
	int		count;
	int		i;
	int		temp;

	count = 0;
	i = 0;
	while (smth[i])
	{
		if (smth[i] == '%')
		{
			temp = ft_parse_specificator(args, smth[++i]);
			if (temp == -1)
				return (-1);
			count += temp;
		}
		else
		{
			if (ft_printf_char(smth[i]) == -1)
				return (-1);
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_parse_specificator(va_list args, char spec)
{
	int	i;

	i = 0;
	if (spec == '%')
		i = ft_printf_char('%');
	else if (spec == 'c')
		i += ft_printf_char(va_arg(args, int));
	else if (spec == 's')
		i += ft_printf_string(va_arg(args, char *));
	else if (spec == 'p')
		i += ft_printf_hexdec_pointer((uintptr_t)va_arg(args, void *));
	else if (spec == 'd' || spec == 'i')
		i += ft_dec_number(va_arg(args, int));
	else if (spec == 'u')
	i += ft_printf_uns_int(va_arg(args, unsigned int));
	else if (spec == 'x')
		i += ft_printf_hexdec_num(va_arg(args, unsigned int),
				"0123456789abcdef");
	else if (spec == 'X')
		i += ft_printf_hexdec_num(va_arg(args, unsigned int),
				"0123456789ABCDEF");
	return (i);
}
