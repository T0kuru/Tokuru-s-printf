/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 21:54:28 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/28 22:53:42 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hexdec_pointer(uintptr_t ptr)
{
	char	*hex_digits;
	char	result[20];
	int		i;
	int		count;
	int		temp;

	i = 0;
	count = 2;
	hex_digits = "0123456789abcdef";
	if (ptr == 0)
		return (write(1, "0x0", 3));
	temp = write(1, "0x", 2);
	if (temp == -1)
		return (-1);
	while (ptr > 0)
	{
		result[i++] = hex_digits[ptr % 16];
		ptr /= 16;
	}
	while (i-- > 0)
	{
		temp = write(1, &result[i], 1);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	return (count);
}

int	ft_printf_hexdec_num(unsigned int n, char *hex_digits)
{
	char	result[9];
	int		i;
	int		count;
	int		temp;

	result[8] = '\0';
	i = 0;
	count = 0;
	if (n == 0)
		return (write(1, "0", 1));
	while (n > 0)
	{
		result[i++] = hex_digits[n % 16];
		n /= 16;
	}
	while (i-- > 0)
	{
		temp = (write(1, &result[i], 1));
		if (temp == -1)
			return (-1);
		count += temp;
	}
	return (count);
}
