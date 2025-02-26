/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_sub1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:01:55 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/26 19:43:16 by lzabolot         ###   ########.fr       */
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
