/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzabolot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 21:54:28 by lzabolot          #+#    #+#             */
/*   Updated: 2025/02/26 23:11:04 by lzabolot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hexdec_pointer(void *ptr)
{
    char	*result;
    char	hex_digits[] = "0123456789abcdef";
    int		i;

    result = (uintptr_t)ptr;

	result[0] = '0';
	result[1] = 'x';
    i = 2;
    // Преобразуем адрес в шестнадцатеричную строку
    while (address > 0)
    {
        result[i++] = hex_digits[address % 16];
        address /= 16;
    }
    result[i] = '\0';
    return (i);
}