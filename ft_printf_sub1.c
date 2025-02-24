/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_sub1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:53:13 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/24 22:29:53 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(char x)
{
	write (1, &x, 1);
	return (1);
}

int	ft_printf_string(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		write(1, str++, 1);
		count++;
	}
	return (count);
}

int	ft_printf_count(char x, int *count)
{
	write(1, &x, 1);
	(*count)++;
	return (*count);
}

int	ft_printf_dec_number(int n, int *count)
{
	if (n == -2147483648)
	{
		*count += write(1, "-2147483648", 11);
		return (*count);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		(*count)++;
		n = -n;
	}
	if (n > 9)
	{
		ft_printf_dec_number(n / 10, count);
	}
	ft_printf_count('0' + n % 10, count);
	return (*count);
}
