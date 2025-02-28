/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_sub1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 21:27:11 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/28 22:50:52 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(char x)
{
	return (write (1, &x, 1));
}

int	ft_printf_string(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write (1, "(null)", 6));
	i = 0;
	while (str[i])
	{
		if (ft_printf_char(str[i]) == -1)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_printf_uns_int(unsigned int n)
{
	int	i;
	int	temp;

	i = 0;
	if (n > 9)
	{
		temp = ft_printf_uns_int(n / 10);
		if (temp == -1)
			return (-1);
		i += temp;
	}
	temp = ft_printf_char('0' + n % 10);
	if (temp == -1)
		return (-1);
	i += temp;
	return (i);
}
