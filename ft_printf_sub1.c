/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_sub1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 21:27:11 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/26 21:51:45 by lzabolot         ###   ########.fr       */
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
	int	i;

	i = 0;
	if (!str)
		return(write(1, "(null)", 6));
	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int	ft_printf_uns_int(unsigned int n)
{
	int	i;
	
	i = 0;
	if (n > 9)
		i += ft_printf_uns_int(n / 10);
	i += ft_printf_char('0' + n % 10);	
	return (i);
}